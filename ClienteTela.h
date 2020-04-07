#ifndef CLIENTETELA_H
#define CLIENTETELA_H

#include <QDialog>
#include <telaAlterarCliente.h>
#include<Persistencia.h>
#include<Cliente.h>
#include <telacliente.h>

namespace Ui {
class ClienteTela;
}

class ClienteTela : public QDialog
{
    Q_OBJECT

public:
    explicit ClienteTela(QWidget *parent = 0);
    ~ClienteTela();

private slots:
    void on_pushButtonIncluir_clicked();

    void on_pushButtonAlterarTelaListagem_clicked();

    void on_pushButton_ListarCliente_clicked();

    void on_pushButton_clicked();

private:
    Ui::ClienteTela *ui;
};

#endif // CLIENTETELA_H
