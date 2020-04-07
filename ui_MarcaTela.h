/********************************************************************************
** Form generated from reading UI file 'MarcaTela.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARCATELA_H
#define UI_MARCATELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_MarcaTela
{
public:
    QTableWidget *tableWidget_Listagem;
    QPushButton *pushButton;
    QPushButton *pushButton_Listar;
    QPushButton *pushButton_Alterar;
    QPushButton *pushButtonIncluir;

    void setupUi(QDialog *MarcaTela)
    {
        if (MarcaTela->objectName().isEmpty())
            MarcaTela->setObjectName(QStringLiteral("MarcaTela"));
        MarcaTela->resize(430, 498);
        tableWidget_Listagem = new QTableWidget(MarcaTela);
        if (tableWidget_Listagem->columnCount() < 3)
            tableWidget_Listagem->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Listagem->setObjectName(QStringLiteral("tableWidget_Listagem"));
        tableWidget_Listagem->setGeometry(QRect(10, 50, 371, 461));
        tableWidget_Listagem->setIconSize(QSize(50, 50));
        tableWidget_Listagem->verticalHeader()->setDefaultSectionSize(50);
        pushButton = new QPushButton(MarcaTela);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));
        pushButton_Listar = new QPushButton(MarcaTela);
        pushButton_Listar->setObjectName(QStringLiteral("pushButton_Listar"));
        pushButton_Listar->setGeometry(QRect(290, 10, 91, 31));
        pushButton_Listar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Alterar = new QPushButton(MarcaTela);
        pushButton_Alterar->setObjectName(QStringLiteral("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(190, 10, 89, 31));
        pushButtonIncluir = new QPushButton(MarcaTela);
        pushButtonIncluir->setObjectName(QStringLiteral("pushButtonIncluir"));
        pushButtonIncluir->setGeometry(QRect(90, 10, 91, 31));

        retranslateUi(MarcaTela);

        pushButton_Listar->setDefault(true);


        QMetaObject::connectSlotsByName(MarcaTela);
    } // setupUi

    void retranslateUi(QDialog *MarcaTela)
    {
        MarcaTela->setWindowTitle(QApplication::translate("MarcaTela", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Listagem->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MarcaTela", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Listagem->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MarcaTela", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Listagem->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MarcaTela", "Foto", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_Listar->setText(QApplication::translate("MarcaTela", "Listar", Q_NULLPTR));
        pushButton_Alterar->setText(QApplication::translate("MarcaTela", "Alterar", Q_NULLPTR));
        pushButtonIncluir->setText(QApplication::translate("MarcaTela", "INCLUIR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MarcaTela: public Ui_MarcaTela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARCATELA_H
