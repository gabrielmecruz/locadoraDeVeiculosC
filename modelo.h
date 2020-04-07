#ifndef MODELO_H
#define MODELO_H
#include <QString>
#include<geradorid.h>
#include<idados.h>
#include <QStringList>

class Modelo : public iDados
{
private:
    unsigned long int ID;
    QString titulo;
    unsigned long int IDMarca;


public:
    Modelo(){}
    Modelo(QString titulo, unsigned long int IDMarca): titulo(titulo) , IDMarca(IDMarca){GeradorID teste;ID=teste.gerarID();}


    unsigned long int getID(){return ID;}
    unsigned long int getIDMarca(){return IDMarca;}
    QString getTitulo(){return titulo;}

    void setTitulo(QString titulo){this->titulo= titulo;}
    void setIDMarca(unsigned long int IDMarca){this->IDMarca=IDMarca;}


    QString desmontarDados()const;
    void montarDados(QString &str);
};

#endif // MODELO_H
