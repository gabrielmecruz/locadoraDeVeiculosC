#include "telalistagemmodelo.h"
#include "ui_telalistagemmodelo.h"

TelaListagemModelo::TelaListagemModelo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListagemModelo)
{
    ui->setupUi(this);
}

TelaListagemModelo::~TelaListagemModelo()
{
    delete ui;
}

void TelaListagemModelo::on_pushButton_clicked()
{
    this->close();
}

void TelaListagemModelo::on_pushButton_Listar_clicked()
{
    try {

    Persistencia<Modelo> agendaModelo("Modelos.csv");
    LLDEC<Modelo> *lista= agendaModelo.listar();
    ui->tableWidget_Listagem->setRowCount(0);


    while(!lista->eVazia()){
        Modelo objeto = lista->retirarInicio();
        //ajustar coluna da grid
        ui->tableWidget_Listagem->resizeColumnsToContents();
        //montar grid

        QTableWidgetItem *itemID = new QTableWidgetItem(QString::number(objeto.getID()));
        QTableWidgetItem *itemTitulo = new QTableWidgetItem(objeto.getTitulo());
        QTableWidgetItem *itemIDMarca = new QTableWidgetItem(QString::number(objeto.getIDMarca()));


        int linha = ui->tableWidget_Listagem->rowCount();
        ui->tableWidget_Listagem->insertRow(linha);
        ui->tableWidget_Listagem->setItem(linha,0,itemID);
        ui->tableWidget_Listagem->setItem(linha,1,itemTitulo);
        ui->tableWidget_Listagem->setItem(linha,2,itemIDMarca);
    }

    delete lista;
    } catch (QString &erro) {
        QMessageBox::warning(this,"Erro", erro);
    }
}

void TelaListagemModelo::on_pushButton_Alterar_clicked()
{
    TelaAlterarModelo tela;
    tela.setModal(true);
    tela.exec();
    this->on_pushButton_Listar_clicked();
}
