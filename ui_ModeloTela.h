/********************************************************************************
** Form generated from reading UI file 'ModeloTela.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELOTELA_H
#define UI_MODELOTELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ModeloTela
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget_Listagem;
    QPushButton *pushButton_Listar;
    QPushButton *pushButton_Alterar;
    QPushButton *pushButtonIncluir;

    void setupUi(QDialog *ModeloTela)
    {
        if (ModeloTela->objectName().isEmpty())
            ModeloTela->setObjectName(QStringLiteral("ModeloTela"));
        ModeloTela->resize(755, 489);
        pushButton = new QPushButton(ModeloTela);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));
        tableWidget_Listagem = new QTableWidget(ModeloTela);
        if (tableWidget_Listagem->columnCount() < 3)
            tableWidget_Listagem->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Listagem->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Listagem->setObjectName(QStringLiteral("tableWidget_Listagem"));
        tableWidget_Listagem->setGeometry(QRect(20, 60, 361, 381));
        tableWidget_Listagem->setIconSize(QSize(50, 50));
        tableWidget_Listagem->verticalHeader()->setDefaultSectionSize(50);
        pushButton_Listar = new QPushButton(ModeloTela);
        pushButton_Listar->setObjectName(QStringLiteral("pushButton_Listar"));
        pushButton_Listar->setGeometry(QRect(290, 20, 89, 25));
        pushButton_Listar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Alterar = new QPushButton(ModeloTela);
        pushButton_Alterar->setObjectName(QStringLiteral("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(190, 20, 89, 25));
        pushButtonIncluir = new QPushButton(ModeloTela);
        pushButtonIncluir->setObjectName(QStringLiteral("pushButtonIncluir"));
        pushButtonIncluir->setGeometry(QRect(90, 20, 91, 23));

        retranslateUi(ModeloTela);

        pushButton_Listar->setDefault(true);


        QMetaObject::connectSlotsByName(ModeloTela);
    } // setupUi

    void retranslateUi(QDialog *ModeloTela)
    {
        ModeloTela->setWindowTitle(QApplication::translate("ModeloTela", "Dialog", Q_NULLPTR));
        pushButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Listagem->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ModeloTela", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Listagem->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ModeloTela", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Listagem->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ModeloTela", "Marca", Q_NULLPTR));
        pushButton_Listar->setText(QApplication::translate("ModeloTela", "Listar", Q_NULLPTR));
        pushButton_Alterar->setText(QApplication::translate("ModeloTela", "Alterar", Q_NULLPTR));
        pushButtonIncluir->setText(QApplication::translate("ModeloTela", "INCLUIR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModeloTela: public Ui_ModeloTela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELOTELA_H
