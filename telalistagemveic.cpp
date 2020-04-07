#include "telalistagemveic.h"
#include "ui_telalistagemveic.h"

TelaListagemVeic::TelaListagemVeic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListagemVeic)
{
    ui->setupUi(this);
}

TelaListagemVeic::~TelaListagemVeic()
{
    delete ui;
}

void TelaListagemVeic::on_pushButton_clicked()
{
    this->close();
}
