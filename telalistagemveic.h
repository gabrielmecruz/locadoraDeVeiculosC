#ifndef TELALISTAGEMVEIC_H
#define TELALISTAGEMVEIC_H

#include <QDialog>

namespace Ui {
class TelaListagemVeic;
}

class TelaListagemVeic : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListagemVeic(QWidget *parent = 0);
    ~TelaListagemVeic();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TelaListagemVeic *ui;
};

#endif // TELALISTAGEMVEIC_H
