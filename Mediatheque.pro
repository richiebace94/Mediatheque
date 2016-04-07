QT += core
QT -= gui

CONFIG += c++11

TARGET = Mediatheque
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mediatheque.cpp

HEADERS += \
    mediatheque.h \
    livre.h \
    ressources.h
