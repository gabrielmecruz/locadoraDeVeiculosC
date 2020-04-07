#ifndef TELALISTAGEMMARCA_H
#define TELALISTAGEMMARCA_H

#include <QDialog>
#include <telaAlterarmarca.h>

namespace Ui {
class TelaListagemMarca;
}

class TelaListagemMarca : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListagemMarca(QWidget *parent = 0);
    ~TelaListagemMarca();

private slots:
    void on_pushButton_Listar_clicked();

    void on_pushButton_clicked();

    void on_pushButton_Alterar_clicked();

private:
    Ui::TelaListagemMarca *ui;
};

#endif // TELALISTAGEMMARCA_H
