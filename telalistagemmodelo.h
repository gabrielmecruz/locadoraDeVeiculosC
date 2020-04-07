#ifndef TELALISTAGEMMODELO_H
#define TELALISTAGEMMODELO_H
#include <Persistencia.h>
#include <modelo.h>
#include <QMessageBox>
#include <telaAlterarmodelo.h>
#include <QDialog>

namespace Ui {
class TelaListagemModelo;
}

class TelaListagemModelo : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListagemModelo(QWidget *parent = 0);
    ~TelaListagemModelo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Listar_clicked();

    void on_pushButton_Alterar_clicked();

private:
    Ui::TelaListagemModelo *ui;
};

#endif // TELALISTAGEMMODELO_H
