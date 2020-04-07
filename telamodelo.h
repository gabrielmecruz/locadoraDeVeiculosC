#ifndef TELAMODELO_H
#define TELAMODELO_H
#include <Marca.h>
#include <lldc.h>

#include <QDialog>

namespace Ui {
class TelaModelo;
}

class TelaModelo : public QDialog
{
    Q_OBJECT

public:
    explicit TelaModelo(QWidget *parent = 0);
    ~TelaModelo();

private slots:
    void on_pushButton_clicked();
    void gerarComboBox()const;

    void on_pushButton_SelecionarMarca_clicked();

    void on_comboBox_activated(int index);

    void on_pushButton_ConfirmarModelo_clicked();

private:
    Ui::TelaModelo *ui;
    Marca marcaAuxiliar;
    LLDEC<Marca> *lista;
};

#endif // TELAMODELO_H
