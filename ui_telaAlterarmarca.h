/********************************************************************************
** Form generated from reading UI file 'telaAlterarmarca.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAALTERARMARCA_H
#define UI_TELAALTERARMARCA_H

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

class Ui_TelaAlterarMarca
{
public:
    QPushButton *pushButton_AlterarMarca;
    QLabel *label_img;
    QLineEdit *lineEdit_TituloMarca;
    QPushButton *pushButton_Voltar;
    QLabel *label;
    QPushButton *pushButton_InserirFoto;
    QLineEdit *lineEdit_IDMarca;
    QLabel *label_2;
    QPushButton *pushButton_Buscar;

    void setupUi(QDialog *TelaAlterarMarca)
    {
        if (TelaAlterarMarca->objectName().isEmpty())
            TelaAlterarMarca->setObjectName(QStringLiteral("TelaAlterarMarca"));
        TelaAlterarMarca->resize(321, 298);
        pushButton_AlterarMarca = new QPushButton(TelaAlterarMarca);
        pushButton_AlterarMarca->setObjectName(QStringLiteral("pushButton_AlterarMarca"));
        pushButton_AlterarMarca->setGeometry(QRect(210, 220, 91, 61));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/devices_floppydisk_dispositivos_691.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_AlterarMarca->setIcon(icon);
        pushButton_AlterarMarca->setIconSize(QSize(28, 28));
        pushButton_AlterarMarca->setAutoDefault(true);
        pushButton_AlterarMarca->setFlat(false);
        label_img = new QLabel(TelaAlterarMarca);
        label_img->setObjectName(QStringLiteral("label_img"));
        label_img->setGeometry(QRect(20, 190, 161, 101));
        label_img->setCursor(QCursor(Qt::UpArrowCursor));
        label_img->setFrameShape(QFrame::Box);
        lineEdit_TituloMarca = new QLineEdit(TelaAlterarMarca);
        lineEdit_TituloMarca->setObjectName(QStringLiteral("lineEdit_TituloMarca"));
        lineEdit_TituloMarca->setGeometry(QRect(20, 130, 171, 21));
        pushButton_Voltar = new QPushButton(TelaAlterarMarca);
        pushButton_Voltar->setObjectName(QStringLiteral("pushButton_Voltar"));
        pushButton_Voltar->setGeometry(QRect(20, 10, 41, 31));
        pushButton_Voltar->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/reply-arrow-filled.png)"));
        pushButton_Voltar->setIconSize(QSize(24, 24));
        label = new QLabel(TelaAlterarMarca);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 100, 171, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        pushButton_InserirFoto = new QPushButton(TelaAlterarMarca);
        pushButton_InserirFoto->setObjectName(QStringLiteral("pushButton_InserirFoto"));
        pushButton_InserirFoto->setGeometry(QRect(20, 160, 91, 23));
        lineEdit_IDMarca = new QLineEdit(TelaAlterarMarca);
        lineEdit_IDMarca->setObjectName(QStringLiteral("lineEdit_IDMarca"));
        lineEdit_IDMarca->setGeometry(QRect(20, 70, 91, 21));
        label_2 = new QLabel(TelaAlterarMarca);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 101, 16));
        label_2->setFont(font);
        pushButton_Buscar = new QPushButton(TelaAlterarMarca);
        pushButton_Buscar->setObjectName(QStringLiteral("pushButton_Buscar"));
        pushButton_Buscar->setGeometry(QRect(120, 70, 71, 21));
        QWidget::setTabOrder(lineEdit_IDMarca, lineEdit_TituloMarca);
        QWidget::setTabOrder(lineEdit_TituloMarca, pushButton_InserirFoto);
        QWidget::setTabOrder(pushButton_InserirFoto, pushButton_AlterarMarca);
        QWidget::setTabOrder(pushButton_AlterarMarca, pushButton_Voltar);
        QWidget::setTabOrder(pushButton_Voltar, pushButton_Buscar);

        retranslateUi(TelaAlterarMarca);

        pushButton_AlterarMarca->setDefault(false);
        pushButton_Buscar->setDefault(true);


        QMetaObject::connectSlotsByName(TelaAlterarMarca);
    } // setupUi

    void retranslateUi(QDialog *TelaAlterarMarca)
    {
        TelaAlterarMarca->setWindowTitle(QApplication::translate("TelaAlterarMarca", "Dialog", Q_NULLPTR));
        pushButton_AlterarMarca->setText(QApplication::translate("TelaAlterarMarca", "Alterar", Q_NULLPTR));
        label_img->setText(QApplication::translate("TelaAlterarMarca", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        pushButton_Voltar->setText(QString());
        label->setText(QApplication::translate("TelaAlterarMarca", "Digite o nome da marca:", Q_NULLPTR));
        pushButton_InserirFoto->setText(QApplication::translate("TelaAlterarMarca", "Inserir Foto", Q_NULLPTR));
        label_2->setText(QApplication::translate("TelaAlterarMarca", "ID Marca", Q_NULLPTR));
        pushButton_Buscar->setText(QApplication::translate("TelaAlterarMarca", "Buscar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaAlterarMarca: public Ui_TelaAlterarMarca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAALTERARMARCA_H
