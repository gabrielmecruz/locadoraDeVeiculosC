#ifndef MARCATELA_H
#define MARCATELA_H

#include <QDialog>
#include <Marca.h>
#include <Persistencia.h>
#include <telaAlterarmarca.h>
#include <telamarca.h>

namespace Ui {
class MarcaTela;
}

class MarcaTela : public QDialog
{
    Q_OBJECT

public:
    explicit MarcaTela(QWidget *parent = 0);
    ~MarcaTela();

private slots:
    void on_pushButtonIncluir_clicked();

    void on_pushButton_Alterar_clicked();

    void on_pushButton_Listar_clicked();

    void on_pushButton_clicked();

private:
    Ui::MarcaTela *ui;
};

#endif // MARCATELA_H
