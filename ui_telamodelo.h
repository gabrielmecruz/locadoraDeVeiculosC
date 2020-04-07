/********************************************************************************
** Form generated from reading UI file 'telamodelo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAMODELO_H
#define UI_TELAMODELO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaModelo
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_ConfirmarModelo;
    QLabel *label_img;
    QLabel *label;
    QLineEdit *lineEdit_TituloModelo;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton_SelecionarMarca;

    void setupUi(QDialog *TelaModelo)
    {
        if (TelaModelo->objectName().isEmpty())
            TelaModelo->setObjectName(QStringLiteral("TelaModelo"));
        TelaModelo->resize(336, 247);
        pushButton = new QPushButton(TelaModelo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));
        pushButton_ConfirmarModelo = new QPushButton(TelaModelo);
        pushButton_ConfirmarModelo->setObjectName(QStringLiteral("pushButton_ConfirmarModelo"));
        pushButton_ConfirmarModelo->setGeometry(QRect(210, 150, 81, 61));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/devices_floppydisk_dispositivos_691.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ConfirmarModelo->setIcon(icon);
        pushButton_ConfirmarModelo->setIconSize(QSize(28, 28));
        pushButton_ConfirmarModelo->setAutoDefault(true);
        pushButton_ConfirmarModelo->setFlat(false);
        label_img = new QLabel(TelaModelo);
        label_img->setObjectName(QStringLiteral("label_img"));
        label_img->setGeometry(QRect(90, 10, 91, 81));
        label_img->setCursor(QCursor(Qt::UpArrowCursor));
        label_img->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_img->setFrameShape(QFrame::Box);
        label = new QLabel(TelaModelo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 100, 171, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        lineEdit_TituloModelo = new QLineEdit(TelaModelo);
        lineEdit_TituloModelo->setObjectName(QStringLiteral("lineEdit_TituloModelo"));
        lineEdit_TituloModelo->setGeometry(QRect(10, 190, 171, 21));
        label_2 = new QLabel(TelaModelo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 170, 171, 16));
        label_2->setFont(font);
        comboBox = new QComboBox(TelaModelo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 120, 171, 25));
        comboBox->setEditable(false);
        pushButton_SelecionarMarca = new QPushButton(TelaModelo);
        pushButton_SelecionarMarca->setObjectName(QStringLiteral("pushButton_SelecionarMarca"));
        pushButton_SelecionarMarca->setGeometry(QRect(530, 70, 91, 31));

        retranslateUi(TelaModelo);

        pushButton_ConfirmarModelo->setDefault(true);
        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TelaModelo);
    } // setupUi

    void retranslateUi(QDialog *TelaModelo)
    {
        TelaModelo->setWindowTitle(QApplication::translate("TelaModelo", "Dialog", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_ConfirmarModelo->setText(QApplication::translate("TelaModelo", "Salvar", Q_NULLPTR));
        label_img->setText(QApplication::translate("TelaModelo", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("TelaModelo", "Selecione a marca:", Q_NULLPTR));
        label_2->setText(QApplication::translate("TelaModelo", "Digite o nome do modelo:", Q_NULLPTR));
        comboBox->setCurrentText(QString());
        pushButton_SelecionarMarca->setText(QApplication::translate("TelaModelo", "Select", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaModelo: public Ui_TelaModelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAMODELO_H
