#include "telamarca.h"
#include "ui_telamarca.h"

TelaMarca::TelaMarca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaMarca),
    enderecofoto("")
{
    ui->setupUi(this);
}

TelaMarca::~TelaMarca()
{
    delete ui;
}

void TelaMarca::on_pushButton_ConfirmarMarca_clicked()
{
    try {
        if(enderecofoto == "") throw QString("Foto não incluída!");
        QString titulo = ui->lineEdit_TituloMarca->text();
        if(titulo == "") throw QString("Nome inválido!");
        Marca aux(titulo, enderecofoto);

        Persistencia<Marca> agendaMarca("Marcas.csv");
        agendaMarca.incluir(aux);
        QMessageBox::information(this, "CONCLUIDO", "Marca cadastrada");
        QDialog::reject();
    }
    catch (QString &erro) {
        QMessageBox::information(this,"Erro do Sistema", erro);
    }
}

void TelaMarca::on_pushButton_InserirFoto_clicked()
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
        image = image.scaledToWidth(ui->label_img->width(),Qt::SmoothTransformation);
        image = image.scaledToHeight(ui->label_img->height(),Qt::SmoothTransformation);
        ui->label_img->setPixmap(QPixmap::fromImage(image));
    }   catch (QString &erro) {
        QMessageBox::information(this,"Erro do Sistema", erro);
    }
}

void TelaMarca::on_pushButton_clicked()
{
    this->close();
}
