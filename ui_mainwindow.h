/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCadastrarMarca;
    QAction *actionCadastrarModelo;
    QAction *actionListarMarca;
    QAction *actionListarModelo;
    QWidget *centralWidget;
    QPushButton *pushButton_Cliente;
    QPushButton *pushButton_Veiculo;
    QPushButton *pushButton_ListarV;
    QPushButton *pushButton_Alugar;
    QPushButton *pushButton_ListarC;
    QMenuBar *menuBar;
    QMenu *menuLoca_o;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 600);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionCadastrarMarca = new QAction(MainWindow);
        actionCadastrarMarca->setObjectName(QStringLiteral("actionCadastrarMarca"));
        actionCadastrarMarca->setCheckable(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/localiza-logo-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCadastrarMarca->setIcon(icon);
        QFont font;
        font.setPointSize(8);
        actionCadastrarMarca->setFont(font);
        actionCadastrarModelo = new QAction(MainWindow);
        actionCadastrarModelo->setObjectName(QStringLiteral("actionCadastrarModelo"));
        actionCadastrarModelo->setFont(font);
        actionListarMarca = new QAction(MainWindow);
        actionListarMarca->setObjectName(QStringLiteral("actionListarMarca"));
        actionListarMarca->setFont(font);
        actionListarModelo = new QAction(MainWindow);
        actionListarModelo->setObjectName(QStringLiteral("actionListarModelo"));
        actionListarModelo->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_Cliente = new QPushButton(centralWidget);
        pushButton_Cliente->setObjectName(QStringLiteral("pushButton_Cliente"));
        pushButton_Cliente->setGeometry(QRect(10, 100, 151, 91));
        pushButton_Cliente->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Cliente->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/business_application_addmale_useradd_insert_add_user_client_2312.png)"));
        pushButton_Cliente->setIconSize(QSize(30, 30));
        pushButton_Veiculo = new QPushButton(centralWidget);
        pushButton_Veiculo->setObjectName(QStringLiteral("pushButton_Veiculo"));
        pushButton_Veiculo->setGeometry(QRect(10, 200, 151, 91));
        pushButton_Veiculo->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Veiculo->setStyleSheet(QStringLiteral("qproperty-icon:url(:/rec/img/Cabriolet_Red_icon-icons.com_54906.png)"));
        pushButton_Veiculo->setIconSize(QSize(30, 30));
        pushButton_ListarV = new QPushButton(centralWidget);
        pushButton_ListarV->setObjectName(QStringLiteral("pushButton_ListarV"));
        pushButton_ListarV->setGeometry(QRect(10, 400, 151, 91));
        pushButton_ListarV->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ListarV->setStyleSheet(QStringLiteral("qproperty-icon: url(:/rec/img/to_do_list_icon-icons.com_76974.png)"));
        pushButton_ListarV->setIconSize(QSize(30, 30));
        pushButton_Alugar = new QPushButton(centralWidget);
        pushButton_Alugar->setObjectName(QStringLiteral("pushButton_Alugar"));
        pushButton_Alugar->setGeometry(QRect(10, 0, 151, 91));
        pushButton_Alugar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Alugar->setStyleSheet(QStringLiteral("qproperty-icon: url(:/rec/img/buyacar_89124.png)"));
        pushButton_Alugar->setIconSize(QSize(30, 30));
        pushButton_ListarC = new QPushButton(centralWidget);
        pushButton_ListarC->setObjectName(QStringLiteral("pushButton_ListarC"));
        pushButton_ListarC->setGeometry(QRect(10, 300, 151, 91));
        pushButton_ListarC->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ListarC->setStyleSheet(QStringLiteral("qproperty-icon: url(:/rec/img/users_folder_19897.png)"));
        pushButton_ListarC->setIconSize(QSize(30, 30));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_Alugar->raise();
        pushButton_Cliente->raise();
        pushButton_Veiculo->raise();
        pushButton_ListarC->raise();
        pushButton_ListarV->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 21));
        menuLoca_o = new QMenu(menuBar);
        menuLoca_o->setObjectName(QStringLiteral("menuLoca_o"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(false);
        mainToolBar->setMaximumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(12);
        mainToolBar->setFont(font1);
        mainToolBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        mainToolBar->setAcceptDrops(false);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setMovable(false);
        mainToolBar->setOrientation(Qt::Horizontal);
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuLoca_o->menuAction());
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCadastrarMarca);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCadastrarModelo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionListarMarca);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionListarModelo);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LOCADORA", Q_NULLPTR));
        actionCadastrarMarca->setText(QApplication::translate("MainWindow", "CadastrarMarca", Q_NULLPTR));
        actionCadastrarModelo->setText(QApplication::translate("MainWindow", "CadastrarModelo", Q_NULLPTR));
        actionListarMarca->setText(QApplication::translate("MainWindow", "ListarMarca", Q_NULLPTR));
        actionListarModelo->setText(QApplication::translate("MainWindow", "ListarModelo", Q_NULLPTR));
        pushButton_Cliente->setText(QApplication::translate("MainWindow", "CLIENTE", Q_NULLPTR));
        pushButton_Veiculo->setText(QApplication::translate("MainWindow", "VEICULO", Q_NULLPTR));
        pushButton_ListarV->setText(QApplication::translate("MainWindow", "MODELO", Q_NULLPTR));
        pushButton_Alugar->setText(QApplication::translate("MainWindow", "LOCA\303\207\303\203O", Q_NULLPTR));
        pushButton_ListarC->setText(QApplication::translate("MainWindow", "MARCA", Q_NULLPTR));
        menuLoca_o->setTitle(QApplication::translate("MainWindow", "Loca\303\247\303\243o", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        mainToolBar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
