#ifndef TELACLIENTE_H
#define TELACLIENTE_H

#include <QDialog>
#include <QMessageBox>
#include <QFileDialog>
#include <QImage>

namespace Ui {
class TelaCliente;
}

class TelaCliente : public QDialog
{
    Q_OBJECT

public:
    explicit TelaCliente(QWidget *parent = 0);
    ~TelaCliente();

private slots:
    void on_pushButton_Salvar_clicked();

    void on_pushButton_InserirFoto_clicked();

    void on_pushButton_clicked();

private:
    Ui::TelaCliente *ui;
    QString enderecofoto;
};

#endif // TELACLIENTE_H
