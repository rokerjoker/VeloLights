#-------------------------------------------------
#
# Project created by QtCreator 2014-02-07T15:08:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VeloLights
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wheel.cpp \
    diode.cpp

HEADERS  += mainwindow.h \
    wheel.h \
    diode.h

FORMS    += mainwindow.ui
