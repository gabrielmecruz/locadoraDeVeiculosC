#ifndef NO_H
#define NO_H


template <class type>
class No
{
protected:
    No<type> *anterior;
    No<type> *proximo;
    type informacao;
public:
    No():anterior(0), proximo(0), informacao(0){}
    No<type>(type informacao):anterior(0), proximo(0), informacao(informacao) {}
    void setAnterior(No<type> *anterior){this->anterior=anterior;}
    void setProximo(No<type> *proximo){this->proximo=proximo;}
    void setInformacao(type informacao){this->informacao=informacao;}
    No<type>* getAnterior()const{return anterior;}
    No<type>* getProximo()const{return proximo;}
    type getInformacao()const{return informacao;}

};

#endif // NO_H
