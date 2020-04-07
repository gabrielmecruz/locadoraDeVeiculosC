#ifndef MODELOTELA_H
#define MODELOTELA_H

#include <QDialog>
#include <Persistencia.h>
#include <telamodelo.h>
#include <telaAlterarmodelo.h>
#include <modelo.h>

namespace Ui {
class ModeloTela;
}

class ModeloTela : public QDialog
{
    Q_OBJECT

public:
    explicit ModeloTela(QWidget *parent = 0);
    ~ModeloTela();

private slots:
    void on_pushButtonIncluir_clicked();

    void on_pushButton_Alterar_clicked();

    void on_pushButton_Listar_clicked();

    void on_pushButton_clicked();

private:
    Ui::ModeloTela *ui;
};

#endif // MODELOTELA_H
