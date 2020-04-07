#include "telaalugar.h"
#include "ui_telaalugar.h"

TelaAlugar::TelaAlugar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaAlugar)
{
    ui->setupUi(this);
}

TelaAlugar::~TelaAlugar()
{
    delete ui;
}

void TelaAlugar::on_pushButton_clicked()
{
    this->close();
}
