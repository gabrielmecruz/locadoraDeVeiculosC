/********************************************************************************
** Form generated from reading UI file 'telalistagemveic.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTAGEMVEIC_H
#define UI_TELALISTAGEMVEIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaListagemVeic
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *TelaListagemVeic)
    {
        if (TelaListagemVeic->objectName().isEmpty())
            TelaListagemVeic->setObjectName(QStringLiteral("TelaListagemVeic"));
        TelaListagemVeic->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/to_do_list_icon-icons.com_76974.png"), QSize(), QIcon::Normal, QIcon::Off);
        TelaListagemVeic->setWindowIcon(icon);
        pushButton = new QPushButton(TelaListagemVeic);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));

        retranslateUi(TelaListagemVeic);

        QMetaObject::connectSlotsByName(TelaListagemVeic);
    } // setupUi

    void retranslateUi(QDialog *TelaListagemVeic)
    {
        TelaListagemVeic->setWindowTitle(QApplication::translate("TelaListagemVeic", "Listar Veiculos", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaListagemVeic: public Ui_TelaListagemVeic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTAGEMVEIC_H
