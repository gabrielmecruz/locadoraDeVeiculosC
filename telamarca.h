#ifndef TELAMARCA_H
#define TELAMARCA_H

#include <QDialog>
#include <QMessageBox>
#include <QFileDialog>
#include <QImage>
#include<Persistencia.h>
#include <Marca.h>

namespace Ui {
class TelaMarca;
}

class TelaMarca : public QDialog
{
    Q_OBJECT

public:
    explicit TelaMarca(QWidget *parent = 0);
    ~TelaMarca();

private slots:
    void on_pushButton_ConfirmarMarca_clicked();

    void on_pushButton_InserirFoto_clicked();

    void on_pushButton_clicked();

private:
    Ui::TelaMarca *ui;
    QString enderecofoto;
};

#endif // TELAMARCA_H
