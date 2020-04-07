#include "Cliente.h"
#include <Persistencia.h>

Cliente::Cliente(long long cpf, QString nome, QString email, unsigned long int telefone, unsigned long int cnh, QString foto):
     nome(nome), telefone(telefone), cnh(cnh), foto(foto){this->setCPF(cpf);this->setEmail(email);}

Cliente::Cliente():cpf(0),nome(""),email(""),telefone(0),cnh(0),foto(""){}

QString Cliente::desmontarDados()const{
    QString saida = "";
    saida += QString::number(cpf);
    saida += ";";
    saida += nome;
    saida += ";";
    saida += email;
    saida += ";";
    saida += QString::number(telefone);
    saida += ";";
    saida += QString::number(cnh);
    saida += ";";
    saida += foto;
    return saida;
}

void Cliente::montarDados(QString &str){
    try{
        QStringList strList = str.split(';');
        if(strList.length()!=6) throw;
        cpf = strList[0].toLongLong();
        nome = strList[1];
        email = strList[2];
        telefone = strList[3].toLong();
        cnh = strList[4].toLong();
        foto = strList[5];
    }catch(...){
        throw QString("Erro no metodo de montar dados");
    }

}

bool Cliente::validadorCPF(long long cpf)
{
    QString saida = QString::number(cpf);

    std::string cpef = saida.toStdString();

    int num1 = 0;
    int i = 10;
    int pos = 0;
    while(i != 1)
    {
        num1 += (cpef[pos] - 48) * i;
        i--;
        pos++;
    }
    num1 = (num1)%11;

    if(num1 < 2)
        num1 = 0;
    else
        num1 = 11 - num1;

    int num2 = 0;
    int tam2 = 10;
    int i2 = 11;
    int pos2 = 0;
    while(tam2 != 0)
    {
        num2 += (cpef[pos2] - 48) * i2;
        tam2--;
        i2--;
        pos2++;
    }

    num2 = (num2)%11;
    if(num2 < 2)
        num2 = 0;
    else
        num2 = 11 - num2;
    if((cpef[9] - 48) == num1 && (cpef[10] - 48)== num2)
        return true;

    else
        return false;
}

void Cliente::setCPF(long long cpf)
{
    if(!validadorCPF(cpf)) throw QString("CPF invalido!");

    Persistencia<Cliente> agendaCliente("Clientes.csv");
    if(agendaCliente.isInFile(cpf)) throw QString ("CPF já existente");


    this->cpf = cpf;
}

void Cliente::setEmail(QString email)
{

    if(!validadorEmail(email)) throw QString("Email inválido!");

    this->email = email;
}

bool Cliente::validadorEmail(QString ende)
{
    std::string eml = ende.toStdString();
    int tam = eml.length();
    for(int i = 0; i < tam ; i++)
    {
        if(eml[i] == 64) return true;
    }
    return false;
}

bool Cliente::operator ==(Cliente aux){
    return this->getCPF()== aux.getCPF();
}
