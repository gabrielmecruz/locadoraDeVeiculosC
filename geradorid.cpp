    #include "geradorid.h"

GeradorID::GeradorID():endereco("ID.csv")
{


}



void GeradorID::guardar(unsigned long int ID)const{
    try {


    std::ofstream arquivoID;
    arquivoID.open(endereco.toStdString().c_str());
    if(!arquivoID.is_open()) throw QString ("Falha ao abrir o arquivo");
    std::string aux = QString::number(ID).toStdString();
    arquivoID<<aux + "\n";
    arquivoID.close();
    } catch (...) {
        throw QString ("Erro ao guardar ID");
    }
}

unsigned long int GeradorID::ultimoID()const{
    try {


    std::ifstream arquivoID;
    arquivoID.open(endereco.toStdString().c_str());

    if(!arquivoID.is_open()) guardar(1);
    //if(!arquivoID.is_open())throw QString ("Falha ao abrir o arquivo");
    std::string linha;
    std::getline(arquivoID, linha);


    QString str = QString::fromStdString(linha);
    return str.toLong();




    } catch (QString &erro) {
        throw (erro);
    }
}

unsigned long int GeradorID::gerarID(){
    try {


    ID= this->ultimoID()+1;




    guardar(ID);

    } catch (...) {
    }
    return ID;
}
