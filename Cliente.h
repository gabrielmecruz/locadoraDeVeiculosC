#ifndef CLIENTE_H
#define CLIENTE_H
#include <QString>
#include <idados.h>
#include <QStringList>
#include <QMessageBox>


class Cliente: public iDados
{
private:
    long long cpf;
    QString nome;
    QString email;
    unsigned long int telefone;
    unsigned long int cnh;
    QString foto;
public:
    Cliente();
    Cliente(long long cpf, QString nome, QString email, unsigned long int telefone, unsigned long int cnh, QString foto);

    unsigned long long getCPF(){return cpf;}
    QString getNome(){return nome;}
    QString getEmail(){return email;}
    unsigned long int getTelefone(){return telefone;}
    unsigned long int getCNH(){return cnh;}
    QString getFoto(){return foto;}

    bool validadorCPF(long long cpf);
    bool validadorEmail(QString ende);

    void setCPF(long long cpf);
    void setNome(QString nome){this->nome= nome;}
    void setEmail(QString email);
    void setTelefone(unsigned long int telefone){this->telefone=telefone;}
    void setFoto(QString foto){this->foto=foto;}
    void setCNH(unsigned long int cnh){this->cnh=cnh;}

    QString desmontarDados()const;
    void montarDados(QString &str);
    long long getID(){return cpf;}



    bool operator ==(Cliente aux);

};

#endif // CLIENTE_H
