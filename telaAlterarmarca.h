#ifndef TELAALTERARMARCA_H
#define TELAALTERARMARCA_H
#include <QDialog>
#include <Marca.h>
#include <Persistencia.h>
#include <QMessageBox>
#include <QFileDialog>

namespace Ui {
class TelaAlterarMarca;
}

class TelaAlterarMarca : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAlterarMarca(QWidget *parent = 0);
    ~TelaAlterarMarca();

private slots:
    void on_pushButton_Buscar_clicked();

    void on_pushButton_AlterarMarca_clicked();

    void on_pushButton_InserirFoto_clicked();

    void on_pushButton_Voltar_clicked();

private:
    Ui::TelaAlterarMarca *ui;
    QString enderecoFoto;
    Marca objetoAntigo;
};

#endif // TELAALTERARMARCA_H
