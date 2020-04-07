#-------------------------------------------------
#
# Project created by QtCreator 2018-05-25T20:51:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TrabalhoFinalTelas
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    icrud.cpp \
    idados.cpp \
    telacliente.cpp \
    telaveiculo.cpp \
    telalistagemc.cpp \
    telaalugar.cpp \
    telalistagemveic.cpp \
    telamodelo.cpp \
    telamarca.cpp \
    telalistagemmarca.cpp \
    telalistagemmodelo.cpp \
    geradorid.cpp \
    Marca.cpp \
    modelo.cpp \
    Cliente.cpp \
    telaAlterarCliente.cpp \
    telaAlterarmarca.cpp \
    telaAlterarmodelo.cpp \
    ClienteTela.cpp \
    MarcaTela.cpp \
    ModeloTela.cpp

HEADERS += \
        mainwindow.h \
    icrud.h \
    idados.h \
    telacliente.h \
    telaveiculo.h \
    telalistagemc.h \
    telaalugar.h \
    telalistagemveic.h \
    telamodelo.h \
    telamarca.h \
    telalistagemmarca.h \
    telalistagemmodelo.h \
    geradorid.h \
    lldc.h \
    Marca.h \
    modelo.h \
    no.h \
    Persistencia.h \
    Cliente.h \
    telaAlterarCliente.h \
    telaAlterarmarca.h \
    telaAlterarmodelo.h \
    ClienteTela.h \
    MarcaTela.h \
    ModeloTela.h

FORMS += \
        mainwindow.ui \
    telacliente.ui \
    telaveiculo.ui \
    telalistagemc.ui \
    telaalugar.ui \
    telalistagemveic.ui \
    telamodelo.ui \
    telamarca.ui \
    telalistagemmarca.ui \
    telalistagemmodelo.ui \
    telaAlterarCliente.ui \
    telaAlterarmarca.ui \
    telaAlterarmodelo.ui \
    ClienteTela.ui \
    MarcaTela.ui \
    ModeloTela.ui

RESOURCES += \
    resources.qrc
