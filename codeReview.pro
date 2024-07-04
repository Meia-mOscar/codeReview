#-------------------------------------------------
#
# Project created by QtCreator 2024-03-04T21:39:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = codeReview
TEMPLATE = app


SOURCES += main.cpp \
    MainWindow.cpp \
    DataStorage.cpp

HEADERS  += \
    MainWindow.h \
    DataStorage.h \
    Model.h

FORMS    += mainwindow.ui
