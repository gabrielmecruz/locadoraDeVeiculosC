#ifndef IDADOS_H
#define IDADOS_H
#include <QString>

class iDados
{
public:
    virtual QString desmontarDados()const = 0;
    virtual void montarDados(QString &str) = 0;
};

#endif // IDADOS_H
