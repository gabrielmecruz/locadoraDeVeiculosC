/********************************************************************************
** Form generated from reading UI file 'telaAlterarCliente.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAALTERARCLIENTE_H
#define UI_TELAALTERARCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaAlterarCliente
{
public:
    QLineEdit *lineEdit_Nome;
    QLineEdit *lineEdit_Telefone;
    QLineEdit *lineEdit_CNH;
    QLabel *label_imagem;
    QLabel *label_4;
    QPushButton *pushButton_InserirFoto;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *lineEdit_Email;
    QLabel *label;
    QPushButton *pushButtonAlterarCliente;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_CPF;
    QLabel *label_3;
    QPushButton *pushButtonBuscarClienteAlterar;
    QPushButton *pushButtonVoltar;

    void setupUi(QDialog *telaAlterarCliente)
    {
        if (telaAlterarCliente->objectName().isEmpty())
            telaAlterarCliente->setObjectName(QStringLiteral("telaAlterarCliente"));
        telaAlterarCliente->resize(476, 414);
        lineEdit_Nome = new QLineEdit(telaAlterarCliente);
        lineEdit_Nome->setObjectName(QStringLiteral("lineEdit_Nome"));
        lineEdit_Nome->setGeometry(QRect(20, 132, 271, 20));
        lineEdit_Telefone = new QLineEdit(telaAlterarCliente);
        lineEdit_Telefone->setObjectName(QStringLiteral("lineEdit_Telefone"));
        lineEdit_Telefone->setGeometry(QRect(309, 129, 133, 20));
        lineEdit_CNH = new QLineEdit(telaAlterarCliente);
        lineEdit_CNH->setObjectName(QStringLiteral("lineEdit_CNH"));
        lineEdit_CNH->setGeometry(QRect(309, 179, 133, 20));
        label_imagem = new QLabel(telaAlterarCliente);
        label_imagem->setObjectName(QStringLiteral("label_imagem"));
        label_imagem->setGeometry(QRect(19, 249, 131, 141));
        label_imagem->setAutoFillBackground(false);
        label_imagem->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_imagem->setFrameShape(QFrame::Box);
        label_imagem->setScaledContents(false);
        label_imagem->setWordWrap(false);
        label_imagem->setMargin(0);
        label_imagem->setOpenExternalLinks(false);
        label_4 = new QLabel(telaAlterarCliente);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(309, 109, 71, 16));
        pushButton_InserirFoto = new QPushButton(telaAlterarCliente);
        pushButton_InserirFoto->setObjectName(QStringLiteral("pushButton_InserirFoto"));
        pushButton_InserirFoto->setGeometry(QRect(19, 209, 91, 31));
        label_5 = new QLabel(telaAlterarCliente);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(309, 159, 31, 16));
        label_2 = new QLabel(telaAlterarCliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 159, 61, 16));
        lineEdit_Email = new QLineEdit(telaAlterarCliente);
        lineEdit_Email->setObjectName(QStringLiteral("lineEdit_Email"));
        lineEdit_Email->setGeometry(QRect(20, 179, 271, 20));
        label = new QLabel(telaAlterarCliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 110, 51, 16));
        pushButtonAlterarCliente = new QPushButton(telaAlterarCliente);
        pushButtonAlterarCliente->setObjectName(QStringLiteral("pushButtonAlterarCliente"));
        pushButtonAlterarCliente->setGeometry(QRect(309, 289, 131, 81));
        layoutWidget = new QWidget(telaAlterarCliente);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 51, 216, 50));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_CPF = new QLineEdit(layoutWidget);
        lineEdit_CPF->setObjectName(QStringLiteral("lineEdit_CPF"));
        lineEdit_CPF->setMaxLength(11);

        gridLayout->addWidget(lineEdit_CPF, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        pushButtonBuscarClienteAlterar = new QPushButton(layoutWidget);
        pushButtonBuscarClienteAlterar->setObjectName(QStringLiteral("pushButtonBuscarClienteAlterar"));

        gridLayout->addWidget(pushButtonBuscarClienteAlterar, 1, 1, 1, 1);

        pushButtonVoltar = new QPushButton(telaAlterarCliente);
        pushButtonVoltar->setObjectName(QStringLiteral("pushButtonVoltar"));
        pushButtonVoltar->setGeometry(QRect(20, 10, 41, 31));
        pushButtonVoltar->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButtonVoltar->setIconSize(QSize(24, 24));
        layoutWidget->raise();
        lineEdit_Nome->raise();
        lineEdit_Telefone->raise();
        lineEdit_CNH->raise();
        label_imagem->raise();
        label_4->raise();
        pushButton_InserirFoto->raise();
        label_5->raise();
        label_2->raise();
        lineEdit_Email->raise();
        label->raise();
        pushButtonAlterarCliente->raise();
        pushButtonVoltar->raise();
        QWidget::setTabOrder(lineEdit_CPF, pushButtonBuscarClienteAlterar);
        QWidget::setTabOrder(pushButtonBuscarClienteAlterar, lineEdit_Nome);
        QWidget::setTabOrder(lineEdit_Nome, lineEdit_Telefone);
        QWidget::setTabOrder(lineEdit_Telefone, lineEdit_Email);
        QWidget::setTabOrder(lineEdit_Email, lineEdit_CNH);
        QWidget::setTabOrder(lineEdit_CNH, pushButton_InserirFoto);
        QWidget::setTabOrder(pushButton_InserirFoto, pushButtonAlterarCliente);

        retranslateUi(telaAlterarCliente);

        QMetaObject::connectSlotsByName(telaAlterarCliente);
    } // setupUi

    void retranslateUi(QDialog *telaAlterarCliente)
    {
        telaAlterarCliente->setWindowTitle(QApplication::translate("telaAlterarCliente", "Dialog", Q_NULLPTR));
        lineEdit_Telefone->setText(QString());
        lineEdit_CNH->setText(QString());
        label_imagem->setText(QString());
        label_4->setText(QApplication::translate("telaAlterarCliente", "Telefone", Q_NULLPTR));
        pushButton_InserirFoto->setText(QApplication::translate("telaAlterarCliente", "Inserir Foto", Q_NULLPTR));
        label_5->setText(QApplication::translate("telaAlterarCliente", "CNH", Q_NULLPTR));
        label_2->setText(QApplication::translate("telaAlterarCliente", "Email", Q_NULLPTR));
        label->setText(QApplication::translate("telaAlterarCliente", "Nome", Q_NULLPTR));
        pushButtonAlterarCliente->setText(QApplication::translate("telaAlterarCliente", "Alterar", Q_NULLPTR));
        lineEdit_CPF->setText(QString());
        label_3->setText(QApplication::translate("telaAlterarCliente", "CPF", Q_NULLPTR));
        pushButtonBuscarClienteAlterar->setText(QApplication::translate("telaAlterarCliente", "Buscar", Q_NULLPTR));
        pushButtonVoltar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class telaAlterarCliente: public Ui_telaAlterarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAALTERARCLIENTE_H
