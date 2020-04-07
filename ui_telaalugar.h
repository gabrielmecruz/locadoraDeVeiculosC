/********************************************************************************
** Form generated from reading UI file 'telaalugar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAALUGAR_H
#define UI_TELAALUGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaAlugar
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *TelaAlugar)
    {
        if (TelaAlugar->objectName().isEmpty())
            TelaAlugar->setObjectName(QStringLiteral("TelaAlugar"));
        TelaAlugar->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/buyacar_89124.png"), QSize(), QIcon::Normal, QIcon::Off);
        TelaAlugar->setWindowIcon(icon);
        comboBox = new QComboBox(TelaAlugar);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(50, 150, 181, 22));
        label = new QLabel(TelaAlugar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 130, 47, 13));
        label_2 = new QLabel(TelaAlugar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 151, 31));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        pushButton = new QPushButton(TelaAlugar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));

        retranslateUi(TelaAlugar);

        QMetaObject::connectSlotsByName(TelaAlugar);
    } // setupUi

    void retranslateUi(QDialog *TelaAlugar)
    {
        TelaAlugar->setWindowTitle(QApplication::translate("TelaAlugar", "Alugar Veiculo", Q_NULLPTR));
        label->setText(QApplication::translate("TelaAlugar", "Marca", Q_NULLPTR));
        label_2->setText(QApplication::translate("TelaAlugar", "Escolha o ve\303\255culo:", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaAlugar: public Ui_TelaAlugar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAALUGAR_H
