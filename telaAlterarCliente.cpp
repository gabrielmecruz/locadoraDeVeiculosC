#include "telaAlterarCliente.h"
#include "ui_telaAlterarCliente.h"
#include <Persistencia.h>
#include <QFileDialog>

telaAlterarCliente::telaAlterarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaAlterarCliente)
{
    ui->setupUi(this);
}

telaAlterarCliente::~telaAlterarCliente()
{
    delete ui;
}

void telaAlterarCliente::on_pushButtonBuscarClienteAlterar_clicked()
{
    try {


    Persistencia<Cliente> agendaCliente("Clientes.csv");
    objetoAntigo = agendaCliente.consultar(ui->lineEdit_CPF->text().toLongLong());
    ui->lineEdit_CNH->setText(QString::number(objetoAntigo.getCNH()));
    ui->lineEdit_Nome->setText(objetoAntigo.getNome());
    ui->lineEdit_Email->setText(objetoAntigo.getEmail());
    ui->lineEdit_Telefone->setText(QString::number(objetoAntigo.getTelefone()));

    QImage image;
    image.load(objetoAntigo.getFoto());
    image = image.scaledToWidth(ui->label_imagem->width(),Qt::SmoothTransformation);
    image = image.scaledToHeight(ui->label_imagem->height(),Qt::SmoothTransformation);
    ui->label_imagem->setPixmap(QPixmap::fromImage(image));
    enderecofoto = objetoAntigo.getFoto();
    }  catch (QString &erro) {
    QMessageBox::information(this,"Erro do Sistema", erro);
}

}

void telaAlterarCliente::on_pushButtonAlterarCliente_clicked()
{
    try {


    unsigned long int  telefone = ui->lineEdit_Telefone->text().toLong();
    QString nome = ui->lineEdit_Nome->text();
    QString email = ui->lineEdit_Email->text();
    unsigned long int cnh = ui->lineEdit_CNH->text().toLong();
    objetoAntigo.setCNH(cnh);
    objetoAntigo.setEmail(email);
    objetoAntigo.setNome(nome);
    objetoAntigo.setTelefone(telefone);
    objetoAntigo.setFoto(enderecofoto);
    Persistencia<Cliente> agendaCliente("Clientes.csv");
    agendaCliente.alterar(objetoAntigo);
    QMessageBox::information(this,"Alteração no cliente", "Cliente alterado");
    QDialog::reject();

    } catch (QString &erro) {
        QMessageBox::information(this,"Erro do Sistema", erro);

    }
}

void telaAlterarCliente::on_pushButton_InserirFoto_clicked()
{
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
}

void telaAlterarCliente::on_pushButtonVoltar_clicked()
{
    this->close();
}
