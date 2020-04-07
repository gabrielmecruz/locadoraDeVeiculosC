#include "telalistagemc.h"
#include "ui_telalistagemc.h"
#include<Persistencia.h>
#include<Cliente.h>


TelaListagemC::TelaListagemC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListagemC)
{
    ui->setupUi(this);
}

TelaListagemC::~TelaListagemC()
{
    delete ui;
}

void TelaListagemC::on_pushButton_ListarCliente_clicked()
{
    try {


        Persistencia<Cliente> agendaCliente("Clientes.csv");

        LLDEC<Cliente> *lista=0;
        lista = agendaCliente.listar();
        ui->tableWidget_ListagemCliente->setRowCount(0);


        while(!lista->eVazia()){
            Cliente objeto = lista->retirarInicio();
            //ajustar coluna da grid
            ui->tableWidget_ListagemCliente->resizeColumnsToContents();


            QImage *img = new QImage(objeto.getFoto());
                       //montar grid

            QTableWidgetItem *itemNome = new QTableWidgetItem(objeto.getNome());
            QTableWidgetItem *itemCPF = new QTableWidgetItem(QString::number(objeto.getCPF()));
            QTableWidgetItem *itemEmail = new QTableWidgetItem(objeto.getEmail());
            QTableWidgetItem *itemTelefone = new QTableWidgetItem(QString::number(objeto.getTelefone()));
            QTableWidgetItem *itemCNH = new QTableWidgetItem(QString::number(objeto.getCNH()));

            /*QTableWidget *table = new QTableWidget(this);
            table->setIconSize(QSize(100,100));*/
            QTableWidgetItem *itemFoto = new QTableWidgetItem;
            itemFoto->setIcon(/*Qt::DecorationRole,*/ QPixmap::fromImage(*img));

            int linha = ui->tableWidget_ListagemCliente->rowCount();
//            ui->tableWidget_ListagemCliente->setColumnWidth(0,100);
//            ui->tableWidget_ListagemCliente->setColumnWidth(1,226);
//            ui->tableWidget_ListagemCliente->setColumnWidth(2,226);
//            ui->tableWidget_ListagemCliente->setColumnWidth(3,85);
//            ui->tableWidget_ListagemCliente->setColumnWidth(4,85);
//            ui->tableWidget_ListagemCliente->setColumnWidth(5,85);


            ui->tableWidget_ListagemCliente->horizontalHeader()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
            ui->tableWidget_ListagemCliente->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
            ui->tableWidget_ListagemCliente->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);
            ui->tableWidget_ListagemCliente->horizontalHeader()->setSectionResizeMode(3,QHeaderView::ResizeToContents);
            ui->tableWidget_ListagemCliente->horizontalHeader()->setSectionResizeMode(4,QHeaderView::ResizeToContents);
            ui->tableWidget_ListagemCliente->horizontalHeader()->setSectionResizeMode(5,QHeaderView::ResizeToContents);
            ui->tableWidget_ListagemCliente->insertRow(linha);
            ui->tableWidget_ListagemCliente->setItem(linha,1,itemNome);
            ui->tableWidget_ListagemCliente->setItem(linha,0,itemCPF);
            ui->tableWidget_ListagemCliente->setItem(linha,2,itemEmail);
            ui->tableWidget_ListagemCliente->setItem(linha,3,itemTelefone);
            ui->tableWidget_ListagemCliente->setItem(linha,4,itemCNH);
            ui->tableWidget_ListagemCliente->setItem(linha,5,itemFoto);
        }

        delete lista;
    }catch(QString &erro)
    {
        QMessageBox::warning(this,"ERRO",erro);
    }
}


void TelaListagemC::on_pushButtonAlterarTelaListagem_clicked()
{
    telaAlterarCliente tlc;
    tlc.setModal(true);
    tlc.exec();
    this->on_pushButton_ListarCliente_clicked();
}

void TelaListagemC::on_pushButton_clicked()
{
    this->close();
}
