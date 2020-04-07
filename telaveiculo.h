#ifndef TELAVEICULO_H
#define TELAVEICULO_H

#include <QDialog>

namespace Ui {
class TelaVeiculo;
}

class TelaVeiculo : public QDialog
{
    Q_OBJECT

public:
    explicit TelaVeiculo(QWidget *parent = 0);
    ~TelaVeiculo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TelaVeiculo *ui;
};

#endif // TELAVEICULO_H
