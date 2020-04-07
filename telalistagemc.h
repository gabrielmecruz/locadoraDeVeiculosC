#ifndef TELALISTAGEMC_H
#define TELALISTAGEMC_H
#include<telaAlterarCliente.h>
#include <QDialog>

namespace Ui {
class TelaListagemC;
}

class TelaListagemC : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListagemC(QWidget *parent = 0);
    ~TelaListagemC();

private slots:
    void on_pushButton_ListarCliente_clicked();

    void on_pushButtonAlterarTelaListagem_clicked();

    void on_pushButton_clicked();

private:
    Ui::TelaListagemC *ui;
};

#endif // TELALISTAGEMC_H
