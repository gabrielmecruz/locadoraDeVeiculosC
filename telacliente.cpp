#include "telacliente.h"
#include "ui_telacliente.h"
#include<Persistencia.h>
#include <Cliente.h>

TelaCliente::TelaCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaCliente),
    enderecofoto("")
{
    ui->setupUi(this);
}

TelaCliente::~TelaCliente()
{
    delete ui;
}

void TelaCliente::on_pushButton_Salvar_clicked()
{
    try {
        if(enderecofoto == "") throw QString("Foto não incluída!");
        QString nome = ui->lineEdit_Nome->text();
        QString email = ui->lineEdit_Email->text();
        unsigned long int telefone =ui->lineEdit_Telefone->text().toLong();
        long long cpf =ui->lineEdit_CPF->text().toLongLong();
        unsigned long int cnh =ui->lineEdit_CNH->text().toLong();




        Cliente auxiliar(cpf, nome , email, telefone ,cnh, enderecofoto);

        Persistencia<Cliente> agendaCliente("Clientes.csv");
        agendaCliente.incluir(auxiliar);
        QMessageBox::information(this, "CONCLUIDO", "Cliente cadastrado");
        QDialog::reject();
    } catch (QString &erro) {
        QMessageBox::information(this,"Erro do Sistema", erro);
    }
}

void TelaCliente::on_pushButton_InserirFoto_clicked()
{
    try {


        QImage image;
        QString foto = QFileDialog::getOpenFileName(this, tr("Abrir imagem"),QDir::currentPath(),tr("Arquivos Fotos (*.png *.jpg *.jpeg *.gif)"));
        if(foto.isEmpty()) throw QString("Arquivo nao foi selecionado");

        // verificando erro de abertura do arquivo de entrada
        if(!image.load(foto)){
            throw QString("Arquivo nao pode ser aberto");
        }
        enderecofoto = foto;
        image = image.scaledToWidth(ui->label_imagem->width(),Qt::SmoothTransformation);
        image = image.scaledToHeight(ui->label_imagem->height(),Qt::SmoothTransformation);
        ui->label_imagem->setPixmap(QPixmap::fromImage(image));
    }   catch (QString &erro) {
        QMessageBox::information(this,"Erro do Sistema", erro);
    }
}


void TelaCliente::on_pushButton_clicked()
{
    this->close();
}
