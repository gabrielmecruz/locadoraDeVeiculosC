#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Alugar_clicked()
{
    TelaAlugar tla;
    tla.setModal(true);
    tla.exec();
}

void MainWindow::on_pushButton_Cliente_clicked()
{
    ClienteTela tlc;
    tlc.setModal(true);
    tlc.exec();
}

void MainWindow::on_pushButton_Veiculo_clicked()
{
    TelaVeiculo tlv;
    tlv.setModal(true);
    tlv.exec();
}

void MainWindow::on_pushButton_ListarC_clicked()
{
    MarcaTela tlm;
    tlm.setModal(true);
    tlm.exec();
}

void MainWindow::on_pushButton_ListarV_clicked()
{
    ModeloTela tlv;
    tlv.setModal(true);
    tlv.exec();
}

void MainWindow::on_actionCadastrarMarca_triggered()
{
    TelaMarca tlm;
    tlm.setModal(true);
    tlm.exec();
}

void MainWindow::on_actionListarMarca_triggered()
{
    MarcaTela tlm;
    tlm.setModal(true);
    tlm.exec();
}


void MainWindow::on_actionCadastrarModelo_triggered()
{
    TelaModelo tela;
    tela.setModal(true);
    tela.exec();
}

void MainWindow::on_actionListarModelo_triggered()
{
    TelaListagemModelo tela;
    tela.setModal(true);
    tela.exec();
}

void MainWindow::paintEvent(QPaintEvent *pe)
{
    QPixmap pixmap;
    pixmap.load(":/rec/img/QUANT2.png");
    QPainter paint(this);
    int widWidth = this->ui->centralWidget->width();
    int widHeight = this->ui->centralWidget->height();
    pixmap = pixmap.scaled(widWidth, widHeight, Qt::KeepAspectRatioByExpanding);
    paint.drawPixmap(0, 0, pixmap);
    QWidget::paintEvent(pe);
}

