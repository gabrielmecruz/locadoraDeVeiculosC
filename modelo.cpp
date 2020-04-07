#include "modelo.h"



QString Modelo::desmontarDados()const{
    QString saida= QString::number(ID);
    saida += ";";
    saida += titulo;
    saida += ";";
    saida += QString::number(IDMarca);

    return saida;
}

void Modelo::montarDados(QString &str){
    try{
        QStringList strList = str.split(';');
        if(strList.length()!=3) throw;
        ID = strList[0].toLong();
        titulo = strList[1];
        IDMarca = strList[2].toLong();

    }catch(...){
        throw QString("Erro no metodo de montar dados");
    }

}
