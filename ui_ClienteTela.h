/********************************************************************************
** Form generated from reading UI file 'ClienteTela.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTETELA_H
#define UI_CLIENTETELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ClienteTela
{
public:
    QPushButton *pushButton_ListarCliente;
    QTableWidget *tableWidget_ListagemCliente;
    QPushButton *pushButtonAlterarTelaListagem;
    QPushButton *pushButton;
    QPushButton *pushButtonIncluir;

    void setupUi(QDialog *ClienteTela)
    {
        if (ClienteTela->objectName().isEmpty())
            ClienteTela->setObjectName(QStringLiteral("ClienteTela"));
        ClienteTela->resize(848, 596);
        pushButton_ListarCliente = new QPushButton(ClienteTela);
        pushButton_ListarCliente->setObjectName(QStringLiteral("pushButton_ListarCliente"));
        pushButton_ListarCliente->setGeometry(QRect(700, 10, 121, 51));
        tableWidget_ListagemCliente = new QTableWidget(ClienteTela);
        if (tableWidget_ListagemCliente->columnCount() < 6)
            tableWidget_ListagemCliente->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ListagemCliente->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ListagemCliente->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ListagemCliente->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_ListagemCliente->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_ListagemCliente->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_ListagemCliente->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget_ListagemCliente->setObjectName(QStringLiteral("tableWidget_ListagemCliente"));
        tableWidget_ListagemCliente->setGeometry(QRect(10, 70, 811, 501));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(150);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_ListagemCliente->sizePolicy().hasHeightForWidth());
        tableWidget_ListagemCliente->setSizePolicy(sizePolicy);
        tableWidget_ListagemCliente->setSizeIncrement(QSize(150, 0));
        tableWidget_ListagemCliente->setBaseSize(QSize(150, 0));
        tableWidget_ListagemCliente->setFrameShape(QFrame::Box);
        tableWidget_ListagemCliente->setIconSize(QSize(50, 50));
        tableWidget_ListagemCliente->verticalHeader()->setDefaultSectionSize(50);
        pushButtonAlterarTelaListagem = new QPushButton(ClienteTela);
        pushButtonAlterarTelaListagem->setObjectName(QStringLiteral("pushButtonAlterarTelaListagem"));
        pushButtonAlterarTelaListagem->setGeometry(QRect(570, 10, 121, 51));
        pushButton = new QPushButton(ClienteTela);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));
        pushButtonIncluir = new QPushButton(ClienteTela);
        pushButtonIncluir->setObjectName(QStringLiteral("pushButtonIncluir"));
        pushButtonIncluir->setGeometry(QRect(440, 10, 121, 51));

        retranslateUi(ClienteTela);

        QMetaObject::connectSlotsByName(ClienteTela);
    } // setupUi

    void retranslateUi(QDialog *ClienteTela)
    {
        ClienteTela->setWindowTitle(QApplication::translate("ClienteTela", "Dialog", Q_NULLPTR));
        pushButton_ListarCliente->setText(QApplication::translate("ClienteTela", "LISTAR", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ListagemCliente->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ClienteTela", "CPF", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ListagemCliente->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ClienteTela", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ListagemCliente->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ClienteTela", "Email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ListagemCliente->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ClienteTela", "Telefone", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_ListagemCliente->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ClienteTela", "CNH", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_ListagemCliente->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ClienteTela", "Foto", Q_NULLPTR));
        pushButtonAlterarTelaListagem->setText(QApplication::translate("ClienteTela", "ALTERAR", Q_NULLPTR));
        pushButton->setText(QString());
        pushButtonIncluir->setText(QApplication::translate("ClienteTela", "INCLUIR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClienteTela: public Ui_ClienteTela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTETELA_H
