/********************************************************************************
** Form generated from reading UI file 'telaAlterarmodelo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAALTERARMODELO_H
#define UI_TELAALTERARMODELO_H

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

class Ui_TelaAlterarModelo
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_AlterarModelo;
    QLineEdit *lineEdit_TituloModelo;
    QLabel *label_3;
    QLineEdit *lineEdit_IDModelo;
    QPushButton *pushButton_BuscarModelo;

    void setupUi(QDialog *TelaAlterarModelo)
    {
        if (TelaAlterarModelo->objectName().isEmpty())
            TelaAlterarModelo->setObjectName(QStringLiteral("TelaAlterarModelo"));
        TelaAlterarModelo->resize(235, 223);
        label_2 = new QLabel(TelaAlterarModelo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 171, 16));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        pushButton = new QPushButton(TelaAlterarModelo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton->setIconSize(QSize(24, 24));
        pushButton_AlterarModelo = new QPushButton(TelaAlterarModelo);
        pushButton_AlterarModelo->setObjectName(QStringLiteral("pushButton_AlterarModelo"));
        pushButton_AlterarModelo->setGeometry(QRect(10, 150, 81, 61));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/devices_floppydisk_dispositivos_691.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_AlterarModelo->setIcon(icon);
        pushButton_AlterarModelo->setIconSize(QSize(28, 28));
        pushButton_AlterarModelo->setAutoDefault(true);
        pushButton_AlterarModelo->setFlat(false);
        lineEdit_TituloModelo = new QLineEdit(TelaAlterarModelo);
        lineEdit_TituloModelo->setObjectName(QStringLiteral("lineEdit_TituloModelo"));
        lineEdit_TituloModelo->setGeometry(QRect(10, 120, 171, 21));
        label_3 = new QLabel(TelaAlterarModelo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 101, 16));
        label_3->setFont(font);
        lineEdit_IDModelo = new QLineEdit(TelaAlterarModelo);
        lineEdit_IDModelo->setObjectName(QStringLiteral("lineEdit_IDModelo"));
        lineEdit_IDModelo->setGeometry(QRect(10, 70, 91, 21));
        pushButton_BuscarModelo = new QPushButton(TelaAlterarModelo);
        pushButton_BuscarModelo->setObjectName(QStringLiteral("pushButton_BuscarModelo"));
        pushButton_BuscarModelo->setGeometry(QRect(120, 70, 81, 21));

        retranslateUi(TelaAlterarModelo);

        pushButton_AlterarModelo->setDefault(false);
        pushButton_BuscarModelo->setDefault(true);


        QMetaObject::connectSlotsByName(TelaAlterarModelo);
    } // setupUi

    void retranslateUi(QDialog *TelaAlterarModelo)
    {
        TelaAlterarModelo->setWindowTitle(QApplication::translate("TelaAlterarModelo", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("TelaAlterarModelo", "Digite o nome do modelo:", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_AlterarModelo->setText(QApplication::translate("TelaAlterarModelo", "Alterar", Q_NULLPTR));
        label_3->setText(QApplication::translate("TelaAlterarModelo", "ID do Modelo", Q_NULLPTR));
        pushButton_BuscarModelo->setText(QApplication::translate("TelaAlterarModelo", "Buscar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaAlterarModelo: public Ui_TelaAlterarModelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAALTERARMODELO_H
