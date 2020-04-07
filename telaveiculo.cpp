#include "telaveiculo.h"
#include "ui_telaveiculo.h"

TelaVeiculo::TelaVeiculo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaVeiculo)
{
    ui->setupUi(this);
}

TelaVeiculo::~TelaVeiculo()
{
    delete ui;
}

void TelaVeiculo::on_pushButton_clicked()
{
    this->close();
}
