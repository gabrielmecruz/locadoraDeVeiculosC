#ifndef MARCA_H
#define MARCA_H
#include<QString>
#include <idados.h>
#include<QStringList>
#include<geradorid.h>

class Marca: public iDados
{
private:
    unsigned long int ID;
    QString titulo;
    QString foto;


public:
    Marca(){}
    Marca(QString titulo, QString foto): titulo(titulo), foto(foto){GeradorID teste;ID=teste.gerarID();}


    unsigned long int getID(){return ID;}
    QString getFoto(){return foto;}
    QString getTitulo(){return titulo;}

    void setFoto(QString foto){this->foto=foto;}
    void setTitulo(QString titulo){this->titulo= titulo;}


    QString desmontarDados()const;
    void montarDados(QString &str);

};

#endif // MARCA_H

