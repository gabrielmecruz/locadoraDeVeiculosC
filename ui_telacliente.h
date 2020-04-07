/********************************************************************************
** Form generated from reading UI file 'telacliente.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACLIENTE_H
#define UI_TELACLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaCliente
{
public:
    QLabel *label;
    QLineEdit *lineEdit_Nome;
    QLineEdit *lineEdit_Email;
    QLabel *label_2;
    QLineEdit *lineEdit_CPF;
    QLabel *label_3;
    QLineEdit *lineEdit_CNH;
    QLabel *label_4;
    QLineEdit *lineEdit_Telefone;
    QLabel *label_5;
    QPushButton *pushButton_Salvar;
    QLabel *label_imagem;
    QPushButton *pushButton_InserirFoto;
    QPushButton *pushButton;

    void setupUi(QDialog *TelaCliente)
    {
        if (TelaCliente->objectName().isEmpty())
            TelaCliente->setObjectName(QStringLiteral("TelaCliente"));
        TelaCliente->resize(453, 353);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/business_application_addmale_useradd_insert_add_user_client_2312.png"), QSize(), QIcon::Normal, QIcon::Off);
        TelaCliente->setWindowIcon(icon);
        label = new QLabel(TelaCliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 51, 51, 16));
        lineEdit_Nome = new QLineEdit(TelaCliente);
        lineEdit_Nome->setObjectName(QStringLiteral("lineEdit_Nome"));
        lineEdit_Nome->setGeometry(QRect(10, 73, 271, 20));
        lineEdit_Email = new QLineEdit(TelaCliente);
        lineEdit_Email->setObjectName(QStringLiteral("lineEdit_Email"));
        lineEdit_Email->setGeometry(QRect(10, 120, 271, 20));
        label_2 = new QLabel(TelaCliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 61, 16));
        lineEdit_CPF = new QLineEdit(TelaCliente);
        lineEdit_CPF->setObjectName(QStringLiteral("lineEdit_CPF"));
        lineEdit_CPF->setGeometry(QRect(299, 73, 133, 20));
        lineEdit_CPF->setMaxLength(11);
        label_3 = new QLabel(TelaCliente);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(299, 51, 31, 16));
        lineEdit_CNH = new QLineEdit(TelaCliente);
        lineEdit_CNH->setObjectName(QStringLiteral("lineEdit_CNH"));
        lineEdit_CNH->setGeometry(QRect(299, 170, 133, 20));
        label_4 = new QLabel(TelaCliente);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(299, 100, 71, 16));
        lineEdit_Telefone = new QLineEdit(TelaCliente);
        lineEdit_Telefone->setObjectName(QStringLiteral("lineEdit_Telefone"));
        lineEdit_Telefone->setGeometry(QRect(299, 120, 133, 20));
        label_5 = new QLabel(TelaCliente);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(299, 150, 31, 16));
        pushButton_Salvar = new QPushButton(TelaCliente);
        pushButton_Salvar->setObjectName(QStringLiteral("pushButton_Salvar"));
        pushButton_Salvar->setGeometry(QRect(340, 290, 91, 51));
        pushButton_Salvar->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/img/devices_floppydisk_dispositivos_691.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Salvar->setIcon(icon1);
        pushButton_Salvar->setIconSize(QSize(29, 28));
        label_imagem = new QLabel(TelaCliente);
        label_imagem->setObjectName(QStringLiteral("label_imagem"));
        label_imagem->setGeometry(QRect(10, 200, 241, 141));
        label_imagem->setAutoFillBackground(false);
        label_imagem->setStyleSheet(QStringLiteral(""));
        label_imagem->setFrameShape(QFrame::NoFrame);
        label_imagem->setScaledContents(false);
        label_imagem->setWordWrap(false);
        label_imagem->setMargin(0);
        label_imagem->setOpenExternalLinks(false);
        pushButton_InserirFoto = new QPushButton(TelaCliente);
        pushButton_InserirFoto->setObjectName(QStringLiteral("pushButton_InserirFoto"));
        pushButton_InserirFoto->setGeometry(QRect(10, 160, 91, 31));
        pushButton = new QPushButton(TelaCliente);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));
        QWidget::setTabOrder(lineEdit_Nome, lineEdit_CPF);
        QWidget::setTabOrder(lineEdit_CPF, lineEdit_Email);
        QWidget::setTabOrder(lineEdit_Email, lineEdit_Telefone);
        QWidget::setTabOrder(lineEdit_Telefone, lineEdit_CNH);
        QWidget::setTabOrder(lineEdit_CNH, pushButton_InserirFoto);
        QWidget::setTabOrder(pushButton_InserirFoto, pushButton_Salvar);

        retranslateUi(TelaCliente);

        pushButton_Salvar->setDefault(true);


        QMetaObject::connectSlotsByName(TelaCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaCliente)
    {
        TelaCliente->setWindowTitle(QApplication::translate("TelaCliente", "Cadastrar Cliente", Q_NULLPTR));
        label->setText(QApplication::translate("TelaCliente", "Nome", Q_NULLPTR));
        label_2->setText(QApplication::translate("TelaCliente", "Email", Q_NULLPTR));
        lineEdit_CPF->setText(QString());
        label_3->setText(QApplication::translate("TelaCliente", "CPF", Q_NULLPTR));
        lineEdit_CNH->setText(QString());
        label_4->setText(QApplication::translate("TelaCliente", "Telefone", Q_NULLPTR));
        lineEdit_Telefone->setText(QString());
        label_5->setText(QApplication::translate("TelaCliente", "CNH", Q_NULLPTR));
        pushButton_Salvar->setText(QApplication::translate("TelaCliente", "  Salvar", Q_NULLPTR));
        label_imagem->setText(QString());
        pushButton_InserirFoto->setText(QApplication::translate("TelaCliente", "Inserir Foto", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaCliente: public Ui_TelaCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACLIENTE_H
