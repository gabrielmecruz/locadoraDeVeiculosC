#include <Marca.h>


QString Marca::desmontarDados()const{
    QString saida= QString::number(ID);
    saida += ";";
    saida+= titulo;
    saida += ";";
    saida+= foto;
    return saida;
}

void Marca::montarDados(QString &str){
    try{
        QStringList strList = str.split(';');
        if(strList.length()!=3) throw;
        ID = strList[0].toLong();
        titulo = strList[1];
        foto = strList[2];
    }catch(...){
        throw QString("Erro no metodo de montar dados");
    }

}
