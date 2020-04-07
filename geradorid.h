#ifndef GERADORID_H
#define GERADORID_H
#include<fstream>
#include <QString>
class GeradorID
{
private:
    unsigned long int ID;
    QString endereco;
public:
    GeradorID();
    unsigned long int gerarID();
    void guardar(unsigned long int ID)const;
    unsigned long int ultimoID()const;


};

#endif // GERADORID_H
