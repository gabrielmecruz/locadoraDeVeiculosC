/********************************************************************************
** Form generated from reading UI file 'telaveiculo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAVEICULO_H
#define UI_TELAVEICULO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaVeiculo
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *TelaVeiculo)
    {
        if (TelaVeiculo->objectName().isEmpty())
            TelaVeiculo->setObjectName(QStringLiteral("TelaVeiculo"));
        TelaVeiculo->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/Cabriolet_Red_icon-icons.com_54906.png"), QSize(), QIcon::Normal, QIcon::Off);
        TelaVeiculo->setWindowIcon(icon);
        pushButton = new QPushButton(TelaVeiculo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));

        retranslateUi(TelaVeiculo);

        QMetaObject::connectSlotsByName(TelaVeiculo);
    } // setupUi

    void retranslateUi(QDialog *TelaVeiculo)
    {
        TelaVeiculo->setWindowTitle(QApplication::translate("TelaVeiculo", "Cadastrar Veiculos", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaVeiculo: public Ui_TelaVeiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAVEICULO_H
