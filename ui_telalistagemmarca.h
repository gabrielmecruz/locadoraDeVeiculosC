/********************************************************************************
** Form generated from reading UI file 'telalistagemmarca.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTAGEMMARCA_H
#define UI_TELALISTAGEMMARCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListagemMarca
{
public:
    QPushButton *pushButton_Listar;
    QTableWidget *tableWidget_Listagem;
    QPushButton *pushButton;
    QPushButton *pushButton_Alterar;

    void setupUi(QDialog *TelaListagemMarca)
    {
        if (TelaListagemMarca->objectName().isEmpty())
            TelaListagemMarca->setObjectName(QStringLiteral("TelaListagemMarca"));
        TelaListagemMarca->resize(456, 592);
        pushButton_Listar = new QPushButton(TelaListagemMarca);
        pushButton_Listar->setObjectName(QStringLiteral("pushButton_Listar"));
        pushButton_Listar->setGeometry(QRect(340, 10, 89, 25));
        pushButton_Listar->setCursor(QCursor(Qt::PointingHandCursor));
        tableWidget_Listagem = new QTableWidget(TelaListagemMarca);
        if (tableWidget_Listagem->columnCount() < 3)
            tableWidget_Listagem->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Listagem->setObjectName(QStringLiteral("tableWidget_Listagem"));
        tableWidget_Listagem->setGeometry(QRect(20, 50, 361, 461));
        tableWidget_Listagem->setIconSize(QSize(50, 50));
        tableWidget_Listagem->verticalHeader()->setDefaultSectionSize(50);
        pushButton = new QPushButton(TelaListagemMarca);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));
        pushButton_Alterar = new QPushButton(TelaListagemMarca);
        pushButton_Alterar->setObjectName(QStringLiteral("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(230, 10, 89, 25));

        retranslateUi(TelaListagemMarca);

        pushButton_Listar->setDefault(true);


        QMetaObject::connectSlotsByName(TelaListagemMarca);
    } // setupUi

    void retranslateUi(QDialog *TelaListagemMarca)
    {
        TelaListagemMarca->setWindowTitle(QApplication::translate("TelaListagemMarca", "Listar Marca", Q_NULLPTR));
        pushButton_Listar->setText(QApplication::translate("TelaListagemMarca", "Listar", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Listagem->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TelaListagemMarca", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Listagem->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TelaListagemMarca", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Listagem->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TelaListagemMarca", "Foto", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_Alterar->setText(QApplication::translate("TelaListagemMarca", "Alterar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaListagemMarca: public Ui_TelaListagemMarca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTAGEMMARCA_H
