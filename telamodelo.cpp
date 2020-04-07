#include "telamodelo.h"
#include "ui_telamodelo.h"
#include<Marca.h>
#include <Persistencia.h>
#include<modelo.h>

TelaModelo::TelaModelo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaModelo)
{
    ui->setupUi(this);
    Persistencia<Marca> agendaMarca("Marcas.csv");
    lista= agendaMarca.listar();
    gerarComboBox();
    on_comboBox_activated(0);

}

TelaModelo::~TelaModelo()
{
    delete ui;
}

void TelaModelo::on_pushButton_clicked()
{
    this->close();
}

void TelaModelo::gerarComboBox()const{
    //ui->comboBox->currentIndexChanged(0);
    for(int i = 0; i<lista->getQuantidadeDeElementos(); i++){
        Marca aux = lista->operator [](i);
        ui->comboBox->addItem(aux.getTitulo());
    }
}


void TelaModelo::on_pushButton_SelecionarMarca_clicked()
{
    //copa
}

void TelaModelo::on_comboBox_activated(int index)
{
    marcaAuxiliar = lista->operator [](index);

    QImage image;
    image.load(marcaAuxiliar.getFoto());
    image = image.scaledToWidth(ui->label_img->width(),Qt::SmoothTransformation);
    image = image.scaledToHeight(ui->label_img->height(),Qt::SmoothTransformation);
    ui->label_img->setPixmap(QPixmap::fromImage(image));
}

void TelaModelo::on_pushButton_ConfirmarModelo_clicked()
{
    Persistencia<Modelo> agendaModelo("Modelos.csv");
    Modelo aux(ui->lineEdit_TituloModelo->text(), marcaAuxiliar.getID());
    agendaModelo.incluir(aux);
    QMessageBox::information(this, "CONCLUIDO", "Modelo cadastrado");
    QDialog::reject();
}
