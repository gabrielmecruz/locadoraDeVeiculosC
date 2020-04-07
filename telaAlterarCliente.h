#ifndef TELAALTERARCLIENTE_H
#define TELAALTERARCLIENTE_H
#include <QInputDialog>
#include <QDialog>
#include <Cliente.h>
namespace Ui {
class telaAlterarCliente;
}

class telaAlterarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit telaAlterarCliente(QWidget *parent = 0);
    ~telaAlterarCliente();

private slots:
    void on_pushButtonBuscarClienteAlterar_clicked();

    void on_pushButtonAlterarCliente_clicked();

    void on_pushButton_InserirFoto_clicked();

    void on_pushButtonVoltar_clicked();

private:
    Ui::telaAlterarCliente *ui;
    QString enderecofoto;
    Cliente objetoAntigo;
};

#endif // TELAALTERARCLIENTE_H
