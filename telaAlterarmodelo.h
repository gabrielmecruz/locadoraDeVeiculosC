#ifndef TELAALTERARMODELO_H
#define TELAALTERARMODELO_H

#include <QDialog>
#include <modelo.h>
#include <Persistencia.h>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class TelaAlterarModelo;
}

class TelaAlterarModelo : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAlterarModelo(QWidget *parent = 0);
    ~TelaAlterarModelo();

private slots:
    void on_pushButton_BuscarModelo_clicked();

    void on_pushButton_AlterarModelo_clicked();

    void on_pushButton_clicked();

private:
    Ui::TelaAlterarModelo *ui;
    QString enderecoFoto;
    Modelo objetoAntigo;

};

#endif // TELAALTERARMODELO_H
