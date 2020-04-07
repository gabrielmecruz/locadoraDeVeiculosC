#ifndef ICRUD_H
#define ICRUD_H

class ICrud
{
public:
    virtual void incluir()=0;
    virtual void listar()=0;
    virtual void alterar()=0;
};

#endif // ICRUD_H
