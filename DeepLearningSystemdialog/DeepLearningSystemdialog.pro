#QT += core
#QT -= gui

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DeepLearningSystemdialog
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += ./src/main.cpp \
    ./src/configdialog.cpp \
    ./src/pages.cpp \
    ./src/subgroundpage.cpp \
    ./src/subskypage.cpp

HEADERS += \
    ./include/configdialog.h \
    ./include/pages.h \
    ./include/subgroundpage.h \
    ./include/subskypage.h

RESOURCES += \
    configdialog.qrc

DISTFILES +=


