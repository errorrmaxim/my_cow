QT += core
QT -= gui
QT += positioning

CONFIG += c++11

TARGET = cow_lol
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    calcul.cpp \
    single_receive.cpp \
    exec.cpp \
    cmd_list.cpp \
    recorder.cpp

HEADERS += \
    calcul.h \
    single_receive.h \
    exec.h \
    cmd_list.h \
    modules.h \
    recorder.h
