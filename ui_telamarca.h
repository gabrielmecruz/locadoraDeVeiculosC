/********************************************************************************
** Form generated from reading UI file 'telamarca.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAMARCA_H
#define UI_TELAMARCA_H

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

class Ui_TelaMarca
{
public:
    QLabel *label;
    QLineEdit *lineEdit_TituloMarca;
    QPushButton *pushButton_ConfirmarMarca;
    QLabel *label_img;
    QPushButton *pushButton_InserirFoto;
    QPushButton *pushButton;

    void setupUi(QDialog *TelaMarca)
    {
        if (TelaMarca->objectName().isEmpty())
            TelaMarca->setObjectName(QStringLiteral("TelaMarca"));
        TelaMarca->resize(310, 293);
        label = new QLabel(TelaMarca);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 171, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        lineEdit_TituloMarca = new QLineEdit(TelaMarca);
        lineEdit_TituloMarca->setObjectName(QStringLiteral("lineEdit_TituloMarca"));
        lineEdit_TituloMarca->setGeometry(QRect(20, 90, 171, 21));
        pushButton_ConfirmarMarca = new QPushButton(TelaMarca);
        pushButton_ConfirmarMarca->setObjectName(QStringLiteral("pushButton_ConfirmarMarca"));
        pushButton_ConfirmarMarca->setGeometry(QRect(210, 200, 81, 61));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/devices_floppydisk_dispositivos_691.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ConfirmarMarca->setIcon(icon);
        pushButton_ConfirmarMarca->setIconSize(QSize(28, 28));
        pushButton_ConfirmarMarca->setAutoDefault(true);
        pushButton_ConfirmarMarca->setFlat(false);
        label_img = new QLabel(TelaMarca);
        label_img->setObjectName(QStringLiteral("label_img"));
        label_img->setGeometry(QRect(20, 160, 161, 101));
        label_img->setCursor(QCursor(Qt::UpArrowCursor));
        label_img->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_img->setFrameShape(QFrame::Box);
        pushButton_InserirFoto = new QPushButton(TelaMarca);
        pushButton_InserirFoto->setObjectName(QStringLiteral("pushButton_InserirFoto"));
        pushButton_InserirFoto->setGeometry(QRect(20, 120, 91, 23));
        pushButton = new QPushButton(TelaMarca);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));

        retranslateUi(TelaMarca);

        pushButton_ConfirmarMarca->setDefault(true);


        QMetaObject::connectSlotsByName(TelaMarca);
    } // setupUi

    void retranslateUi(QDialog *TelaMarca)
    {
        TelaMarca->setWindowTitle(QApplication::translate("TelaMarca", "Cadastrar Marca", Q_NULLPTR));
        label->setText(QApplication::translate("TelaMarca", "Digite o nome da marca:", Q_NULLPTR));
        pushButton_ConfirmarMarca->setText(QApplication::translate("TelaMarca", "Salvar", Q_NULLPTR));
        label_img->setText(QApplication::translate("TelaMarca", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        pushButton_InserirFoto->setText(QApplication::translate("TelaMarca", "Inserir Foto", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaMarca: public Ui_TelaMarca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAMARCA_H
