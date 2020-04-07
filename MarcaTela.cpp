#include "MarcaTela.h"
#include "ui_MarcaTela.h"

MarcaTela::MarcaTela(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MarcaTela)
{
    ui->setupUi(this);
}

MarcaTela::~MarcaTela()
{
    delete ui;
}

void MarcaTela::on_pushButtonIncluir_clicked()
{
    TelaMarca tl;
    tl.setModal(true);
    tl.exec();
}

void MarcaTela::on_pushButton_Alterar_clicked()
{
    TelaAlterarMarca tl;
    tl.setModal(true);
    tl.exec();
}

void MarcaTela::on_pushButton_Listar_clicked()
{
    try {

        Persistencia<Marca> agendaMarca("Marcas.csv");
        LLDEC<Marca> *lista=0;
        lista = agendaMarca.listar();
        ui->tableWidget_Listagem->setRowCount(0);


        while(!lista->eVazia()){
            Marca objeto = lista->retirarInicio();
            //ajustar coluna da grid
            ui->tableWidget_Listagem->resizeColumnsToContents();
            //montar grid
            QImage *img = new QImage(objeto.getFoto());
            //montar grid
            QTableWidgetItem *itemID = new QTableWidgetItem(QString::number(objeto.getID()));
            QTableWidgetItem *itemTitulo = new QTableWidgetItem(objeto.getTitulo());
            QTableWidget *table = new QTableWidget(this);
            table->setIconSize(QSize(100, 100));

            QTableWidgetItem *itemFoto = new QTableWidgetItem;
            /*itemFoto->setSizeHint(QSize(100, 50));*/

            itemFoto->setIcon(/*Qt::DecorationRole,*/ QPixmap::fromImage(*img));
            int linha = ui->tableWidget_Listagem->rowCount();
            ui->tableWidget_Listagem->insertRow(linha);
            ui->tableWidget_Listagem->setItem(linha,0,itemID);
            ui->tableWidget_Listagem->setItem(linha,1,itemTitulo);
            ui->tableWidget_Listagem->setItem(linha,2,itemFoto);
        }

        delete lista;
    } catch (QString &erro) {
        QMessageBox::warning(this,"ERRO",erro);
    }
}

void MarcaTela::on_pushButton_clicked()
{
    this->close();
}
