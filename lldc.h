
#ifndef LLDEC_H
#define LLDEC_H
#include "no.h"
#include <QString>


template <class type>
class LLDEC
{
protected:
    No<type> *ptInicio;
    No<type> *ptFim;
    int quantidadeDeElementos;

public:
    LLDEC():ptInicio(0), ptFim(0), quantidadeDeElementos(0){}
    ~LLDEC<type>();
    int getQuantidadeDeElementos()const{return quantidadeDeElementos;}
    void inserirInicio(type elemento);
    bool eVazia()const{return (!ptInicio);}
    type operator[](int numero)const;
    type retirarInicio();
    void inserirFim(type elemento);
    type retirarFim();
    void inserirPosicao(int pos, type elemento);
    type retirarPosicao(int pos);
    void inserirOrdenado(type elemento);
    QString listarSentidoHorario()const;
    QString listarSentidoAntiHorario()const;
    int buscar(type elemento)const;
    void inserirOrdenadoSemRepeticao(type elemento);


};
template <class type>
LLDEC<type>::~LLDEC(){
    if(ptInicio){
        while(ptInicio!=0) this->retirarInicio();
    }
}

template <class type>
int LLDEC<type>::buscar(type elemento)const{
    try{
        if(eVazia()) throw QString("Lista vazia");

        No<type> *ptAuxI = ptInicio;
        No<type> *ptAuxF= ptFim;
        int valor;
        for(int i=0; i<=quantidadeDeElementos/2; i++){

            if(ptAuxI->getInformacao() == elemento){
                valor = i;
                return valor;
            }
            if(ptAuxF->getInformacao() == elemento){
                valor = quantidadeDeElementos-1-i;
                return valor;
            }
            ptAuxI = ptAuxI->getProximo();
            ptAuxF = ptAuxF->getAnterior();
        }

        throw QString ("Elemento nao encontrado");

    }catch (std::bad_alloc&){
        throw QString("Falta de memória");
    }
}

template <class type>
void LLDEC<type>::inserirInicio(type elemento){
    try{
        No<type> *ptAux = new No<type>(elemento);

        ptAux->setProximo(ptInicio);

        if(eVazia()){
            ptInicio = ptAux;
            ptFim = ptInicio;
            ptFim->setProximo(ptInicio);
            quantidadeDeElementos++;
            return;
        }

        ptAux->setProximo(ptInicio);
        ptInicio->setAnterior(ptAux);
        ptFim->setProximo(ptInicio);
        ptInicio = ptAux;
        ptInicio->setAnterior(ptFim);
        quantidadeDeElementos++;

    }catch (std::bad_alloc&) {
        throw QString("Falta de memória");
    }

}

template <class type>
type LLDEC<type>::operator[](int numero)const{
    if(ptInicio == 0) throw QString ("Lista vazia");
    if(numero>quantidadeDeElementos || numero <0) throw QString("Elemento não existe");
    No<type> *aux = ptInicio;

    for(int i=0; i<numero;i++){
        aux = aux->getProximo();
    }
    return aux->getInformacao();
}

template <class type>
type LLDEC<type>::retirarInicio(){
    if(eVazia())throw QString("Lista Vazia");

    No<type> *ptAux = ptInicio;

    if(quantidadeDeElementos==1){
        ptInicio = 0;
        ptFim = ptInicio;
        quantidadeDeElementos--;
        type valor = ptAux->getInformacao();
        delete ptAux;
        return valor;
    }

    ptInicio = ptInicio->getProximo();
    ptInicio->setAnterior(0);
    ptFim->setProximo(ptInicio);
    ptInicio->setAnterior(ptFim);
    quantidadeDeElementos--;
    type valor = ptAux->getInformacao();
    delete ptAux;
    return valor;
}

template <class type>
void LLDEC<type>::inserirFim(type elemento){
    try{
        No<type> *ptAux = new No<type>(elemento);

        if(eVazia()){
            ptInicio = ptAux;
            ptFim = ptInicio;
            ptFim->setProximo(ptInicio);
            ptInicio->setAnterior(ptFim);
            quantidadeDeElementos++;
            return;
        }
        ptFim->setProximo(ptAux);
        ptAux->setAnterior(ptFim);
        ptFim = ptAux;
        ptFim->setProximo(ptInicio);
        ptInicio->setAnterior(ptFim);

        quantidadeDeElementos++;
    }catch (std::bad_alloc&){
        throw QString("Falta de memória");
    }
}

template <class type>
type LLDEC<type>::retirarFim(){
    if(eVazia()) throw QString ("Lista vazia");

    No<type> *ptAux = ptFim;
    if(quantidadeDeElementos == 1){
        ptInicio = 0;
        ptFim = 0;
        type valor = ptAux->getInformacao();
        delete ptAux;
        quantidadeDeElementos--;
        return valor;
    }

    ptFim = ptAux->getAnterior();
    ptFim->setProximo(ptInicio);
    ptInicio->setAnterior(ptFim);
    quantidadeDeElementos--;
    type valor = ptAux->getInformacao();
    delete ptAux;
    return valor;
}

template <class type>
void LLDEC<type>::inserirPosicao(int pos, type elemento){
    if(pos < 0 || pos > quantidadeDeElementos+1) throw QString("Posicao Invalida");
    if(pos == 0){
        this->inserirInicio(elemento);
        return;
    }

    if(pos == quantidadeDeElementos){
        this->inserirFim(elemento);
        return;
    }

    No<type> *ptP = ptInicio;

    for(int i = 0; i < pos-1; i++) ptP = ptP->getProximo();

    No<type> *ptAux = new No<type>(elemento);
    No<type> *ptAux2;
    ptAux->setProximo(ptP->getProximo());
    ptAux->setAnterior(ptP);
    ptAux2 = ptP->getProximo();
    ptP->setProximo(ptAux);
    ptAux2->setAnterior(ptAux);

    quantidadeDeElementos++;
}

template <class type>
type LLDEC<type>::retirarPosicao(int pos){
    if(quantidadeDeElementos == 0) throw QString("Lista Vazia");
    if(pos < 0 || pos >= quantidadeDeElementos) throw QString("Posicao Invalida");

    if(pos == 0) return this->retirarInicio();

    if(pos == quantidadeDeElementos-1) return this->retirarFim();

    No<type> *ptAux1;
    ptAux1 = ptInicio;
    for(int i = 0; i < pos; i++){
        ptAux1 = ptAux1->getProximo();
    }

    No<type> *ptAux2, *ptAux3;
    ptAux2 = ptAux1->getAnterior();
    ptAux3 = ptAux1->getProximo();
    ptAux2->setProximo(ptAux3);
    ptAux3->setAnterior(ptAux2);

    type valor = ptAux1->getInformacao();
    delete ptAux1;
    quantidadeDeElementos--;
    return valor;

}
template <class type>
void LLDEC<type>::inserirOrdenado(type elemento){
    try{
        if(ptInicio==0 || ptInicio->getInformacao() > elemento){
            inserirInicio(elemento);
            return;
        }
        if(ptFim->getInformacao() < elemento){
            inserirFim(elemento);
            return;
        }

        No<type> *ptAux = new No<type>(elemento);

        No<type> *ptP, *ptV;
        ptP = ptInicio;
        ptV = ptP;
        while(ptP != 0 && ptP->getInformacao() <= elemento){
            ptV = ptP;
            ptP = ptP->getProximo();
        }

        ptAux->setProximo(ptV->getProximo());
        ptV->setProximo(ptAux);
        ptAux->setAnterior(ptV);
        ptP->setAnterior(ptAux);
        quantidadeDeElementos++;

    }catch (std::bad_alloc&){
        throw QString("Falta de memória");
    }
}
template <class type>
QString LLDEC<type>::listarSentidoHorario()const{
    try{
        No<type> *ptaux= ptInicio;
        QString saida= "";
        for(int i=0; i<quantidadeDeElementos*3; i++){
            saida += QString::number(ptaux->getInformacao());
            saida += " ";
            ptaux= ptaux->getProximo();
            if(ptaux==ptFim->getProximo()) saida+= "|| ";

        }

        return saida;

    }catch (std::bad_alloc&){
        throw QString("Falta de memória");
    }
}
template <class type>
QString LLDEC<type>::listarSentidoAntiHorario()const{
    try{
        No<type> *ptaux= ptFim;
        QString saida= "";
        for(int i=0; i<quantidadeDeElementos*3; i++){
            saida += QString::number(ptaux->getInformacao());
            saida += " ";
            ptaux= ptaux->getAnterior();
            if(ptaux==ptInicio->getAnterior()) saida+= "|| ";
        }

        return saida;

    }catch (std::bad_alloc&){
        throw QString("Falta de memória");
    }
}
template <class type>
void LLDEC<type>::inserirOrdenadoSemRepeticao(type elemento){
    try{
        if(ptInicio==0 || ptInicio->getInformacao() > elemento ){
            inserirInicio(elemento);
            return;
        }
        if(ptFim->getInformacao() < elemento ){
            inserirFim(elemento);
            return;
        }

        No<type> *ptAux = new No<type>(elemento);
        if(ptInicio->getInformacao()== elemento) throw QString("elemento já existe");


        No<type> *ptP, *ptV;
        ptP = ptInicio;
        ptV = ptP;
        while(ptP != 0 && ptP->getInformacao() < elemento ){
            ptV = ptP;
            ptP = ptP->getProximo();
            if(elemento== ptP->getInformacao()) throw QString("elemento já existe");


        }

        ptAux->setProximo(ptV->getProximo());
        ptV->setProximo(ptAux);
        ptAux->setAnterior(ptV);
        ptP->setAnterior(ptAux);
        quantidadeDeElementos++;


    }catch (std::bad_alloc&){
        throw QString("Falta de memória");
    }
}
#endif // LLDEC_H
