/********************************************************************************
** Form generated from reading UI file 'telalistagemmodelo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTAGEMMODELO_H
#define UI_TELALISTAGEMMODELO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListagemModelo
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget_Listagem;
    QPushButton *pushButton_Listar;
    QPushButton *pushButton_Alterar;

    void setupUi(QDialog *TelaListagemModelo)
    {
        if (TelaListagemModelo->objectName().isEmpty())
            TelaListagemModelo->setObjectName(QStringLiteral("TelaListagemModelo"));
        TelaListagemModelo->resize(456, 426);
        pushButton = new QPushButton(TelaListagemModelo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));
        tableWidget_Listagem = new QTableWidget(TelaListagemModelo);
        if (tableWidget_Listagem->columnCount() < 3)
            tableWidget_Listagem->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Listagem->setObjectName(QStringLiteral("tableWidget_Listagem"));
        tableWidget_Listagem->setGeometry(QRect(20, 50, 361, 381));
        tableWidget_Listagem->setIconSize(QSize(50, 50));
        tableWidget_Listagem->verticalHeader()->setDefaultSectionSize(50);
        pushButton_Listar = new QPushButton(TelaListagemModelo);
        pushButton_Listar->setObjectName(QStringLiteral("pushButton_Listar"));
        pushButton_Listar->setGeometry(QRect(340, 10, 89, 25));
        pushButton_Listar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Alterar = new QPushButton(TelaListagemModelo);
        pushButton_Alterar->setObjectName(QStringLiteral("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(240, 10, 89, 25));

        retranslateUi(TelaListagemModelo);

        pushButton_Listar->setDefault(true);


        QMetaObject::connectSlotsByName(TelaListagemModelo);
    } // setupUi

    void retranslateUi(QDialog *TelaListagemModelo)
    {
        TelaListagemModelo->setWindowTitle(QApplication::translate("TelaListagemModelo", "Dialog", Q_NULLPTR));
        pushButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Listagem->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TelaListagemModelo", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Listagem->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TelaListagemModelo", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Listagem->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TelaListagemModelo", "Marca", Q_NULLPTR));
        pushButton_Listar->setText(QApplication::translate("TelaListagemModelo", "Listar", Q_NULLPTR));
        pushButton_Alterar->setText(QApplication::translate("TelaListagemModelo", "Alterar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaListagemModelo: public Ui_TelaListagemModelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTAGEMMODELO_H
