#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <telaalugar.h>
#include <telacliente.h>
#include <telamarca.h>
#include <telamodelo.h>
#include <telaveiculo.h>
#include <telalistagemc.h>
#include <telalistagemveic.h>
#include <telalistagemmarca.h>
#include <telalistagemmodelo.h>
#include <ClienteTela.h>
#include <QPainter>
#include <MarcaTela.h>
#include <ModeloTela.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Alugar_clicked();

    void on_pushButton_Cliente_clicked();

    void on_pushButton_Veiculo_clicked();

    void on_pushButton_ListarC_clicked();

    void on_pushButton_ListarV_clicked();

    void on_actionCadastrarMarca_triggered();

    void on_actionListarMarca_triggered();

    void on_actionCadastrarModelo_triggered();

    void on_actionListarModelo_triggered();

    void paintEvent(QPaintEvent *pe);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
