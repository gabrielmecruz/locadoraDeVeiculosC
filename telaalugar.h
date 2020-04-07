#ifndef TELAALUGAR_H
#define TELAALUGAR_H

#include <QDialog>

namespace Ui {
class TelaAlugar;
}

class TelaAlugar : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAlugar(QWidget *parent = 0);
    ~TelaAlugar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TelaAlugar *ui;
};

#endif // TELAALUGAR_H
