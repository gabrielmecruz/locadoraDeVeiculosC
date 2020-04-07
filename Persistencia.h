#ifndef MARCAPERSISTENCIA_H
#define MARCAPERSISTENCIA_H
#include <QString>
#include <icrud.h>
#include <fstream>
#include <lldc.h>
#include <Cliente.h>

template <class tipo>
class Persistencia
{
private:
    QString nomeDoArquivo;
public:
    Persistencia(QString nomeDoArquivo);

    void incluir(tipo objeto);
    LLDEC<tipo>* listar()const;
    tipo consultar(long long id)const;
    void alterar(tipo objetoNovo);
    bool isInFile(long long ID)const;
};

template <class tipo>
Persistencia<tipo>::Persistencia(QString nomeDoArquivo)

{
    this->nomeDoArquivo = nomeDoArquivo;
}


template <class tipo>
void Persistencia<tipo>::incluir(tipo objeto)
{
    std::ofstream arquivo;

    arquivo.open(nomeDoArquivo.toStdString().c_str(), std::ios::out|std::ios::app);
    if(!arquivo.is_open()){
        throw QString("Arquivo não foi aberto - Metodo incluir");
    }
    arquivo<<objeto.desmontarDados().toStdString()+"\n";
    arquivo.close();
}

template <class tipo>
LLDEC<tipo>* Persistencia<tipo>::listar()const{
    try{
        std::ifstream arquivo;
        arquivo.open(nomeDoArquivo.toStdString().c_str());

        if(!arquivo.is_open())throw QString("Arquivo Vazio!");

        LLDEC<tipo> *lista = new LLDEC<tipo>();
        std::string linha;
        std::getline(arquivo,linha);
        while(!arquivo.eof()){
            tipo objeto;
            QString str = QString::fromStdString(linha);
            objeto.montarDados(str);
            lista->inserirFim(objeto);
            std::getline(arquivo,linha);
        }
        arquivo.close();
        return lista;

    }catch(QString &erro){
        throw (erro);
    }catch(std::bad_alloc&){
        throw QString ("M E M O R I A");
    }

}
template <class tipo>
tipo Persistencia<tipo>::consultar(long long id)const{
    try{
        std::ifstream arquivoAgenda;
        arquivoAgenda.open(nomeDoArquivo.toStdString().c_str());
        if(!arquivoAgenda.is_open()){
            throw QString("Arquivo não foi aberto");
        }
        std::string linha;
        std::getline(arquivoAgenda,linha);
        while(!arquivoAgenda.eof()){
            tipo objeto;
            QString str = QString::fromStdString(linha);
            objeto.montarDados(str);
            if(objeto.getID()== id) return objeto;
            std::getline(arquivoAgenda,linha);
        }
        throw QString("Objeto não encontrado");
    }catch(QString &erro){
        throw (erro);
    }catch(std::bad_alloc&){
        throw QString ("M E M O R I A");
    }
}


template <class tipo>
void Persistencia<tipo>::alterar(tipo objetoNovo){
    try {
        // colocar todos os objetos do arquivo numa lista
        LLDEC<tipo>* listaaux= this->listar();

        //zerar o arquivo
        std::ofstream arquivo;

        arquivo.open(nomeDoArquivo.toStdString().c_str());
        if(!arquivo.is_open()){
            throw QString("Arquivo não foi aberto ");
        }
        arquivo.close();

        //reinserir todos os elementos, e trocar o antigo pelo novo
        while(!listaaux->eVazia()){
           tipo objetoAux = listaaux->retirarInicio();
           if(objetoAux.getID() != objetoNovo.getID()) this->incluir(objetoAux);
           else  this->incluir(objetoNovo);
        }

    } catch (...) {
        throw QString ("Erro ao alterar");
    }
}



template <class tipo>
bool Persistencia<tipo>::isInFile(long long ID) const{
    try {

        std::ifstream arquivoAgenda;
        arquivoAgenda.open(nomeDoArquivo.toStdString().c_str());
        if(!arquivoAgenda.is_open()){
            return false;
        }
        // colocar todos os objetos do arquivo numa lista
        LLDEC<tipo>* listaaux= this->listar();

        while(!listaaux->eVazia()){
            tipo objetoAux = listaaux->retirarInicio();
            if(objetoAux.getID() == ID) return true;

        }
        return false;



    } catch (...) {
        throw QString ("Erro ao verificar duplicidade no arquivo");
    }
}
#endif // MARCAPERSISTENCIA_H
