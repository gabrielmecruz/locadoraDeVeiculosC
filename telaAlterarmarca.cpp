#include "telaAlterarmarca.h"
#include "ui_telaAlterarmarca.h"

TelaAlterarMarca::TelaAlterarMarca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaAlterarMarca)
{
    ui->setupUi(this);
}

TelaAlterarMarca::~TelaAlterarMarca()
{
    delete ui;
}

void TelaAlterarMarca::on_pushButton_Buscar_clicked()
{
    try {


        Persistencia<Marca> agendaMarca("Marcas.csv");
        objetoAntigo = agendaMarca.consultar(ui->lineEdit_IDMarca->text().toLongLong());
        ui->lineEdit_TituloMarca->setText(objetoAntigo.getTitulo());

        QImage image;
        image.load(objetoAntigo.getFoto());
        image = image.scaledToWidth(ui->label_img->width(),Qt::SmoothTransformation);
        image = image.scaledToHeight(ui->label_img->height(),Qt::SmoothTransformation);
        ui->label_img->setPixmap(QPixmap::fromImage(image));
        enderecoFoto = objetoAntigo.getFoto();
    }  catch (QString &erro) {
        QMessageBox::warning(this,"Erro do Sistema", erro);
    }
}


void TelaAlterarMarca::on_pushButton_AlterarMarca_clicked()
{
    try{
        QString titulo = ui->lineEdit_TituloMarca->text();
        objetoAntigo.setTitulo(titulo);
        objetoAntigo.setFoto(enderecoFoto);

        Persistencia<Marca> agendaMarca("Marcas.csv");
        agendaMarca.alterar(objetoAntigo);
        QMessageBox::information(this,"Alteração na marca", "Marca alterada");
        QDialog::reject();

    } catch (QString &erro) {
        QMessageBox::information(this,"Erro do Sistema", erro);

    }

}

void TelaAlterarMarca::on_pushButton_InserirFoto_clicked()
{
    QImage image;
    QString foto = QFileDialog::getOpenFileName(this, tr("Abrir imagem"),QDir::currentPath(),tr("Arquivos Fotos (*.png *.jpg *.jpeg *.gif)"));
    if(foto.isEmpty()) throw QString("Arquivo nao foi selecionado");

    // verificando erro de abertura do arquivo de entrada
    if(!image.load(foto)){
        throw QString("Arquivo nao pode ser aberto");
    }
    enderecoFoto = foto;
    image = image.scaledToWidth(ui->label_img->width(),Qt::SmoothTransformation);
    image = image.scaledToHeight(ui->label_img->height(),Qt::SmoothTransformation);
    ui->label_img->setPixmap(QPixmap::fromImage(image));
}

void TelaAlterarMarca::on_pushButton_Voltar_clicked()
{
    this->close();
}
