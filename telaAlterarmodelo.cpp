#include "telaAlterarmodelo.h"
#include "ui_telaAlterarmodelo.h"

TelaAlterarModelo::TelaAlterarModelo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaAlterarModelo)
{
    ui->setupUi(this);
}

TelaAlterarModelo::~TelaAlterarModelo()
{
    delete ui;
}

void TelaAlterarModelo::on_pushButton_BuscarModelo_clicked()
{
    try {
        Persistencia<Modelo> agendaModelo("Modelos.csv");
        objetoAntigo = agendaModelo.consultar(ui->lineEdit_IDModelo->text().toLongLong());
        ui->lineEdit_TituloModelo->setText(objetoAntigo.getTitulo());

    }  catch (QString &erro) {
        QMessageBox::warning(this,"Erro do Sistema", erro);
    }
}

void TelaAlterarModelo::on_pushButton_AlterarModelo_clicked()
{
    try{
        QString titulo = ui->lineEdit_TituloModelo->text();
        objetoAntigo.setTitulo(titulo);

        Persistencia<Modelo> agendaMarca("Modelos.csv");
        agendaMarca.alterar(objetoAntigo);
        QMessageBox::information(this,"Alteração no modelo", "Modelo alterado");
        QDialog::reject();

    } catch (QString &erro) {
        QMessageBox::information(this,"Erro do Sistema", erro);

    }
}

void TelaAlterarModelo::on_pushButton_clicked()
{
    this->close();
}
