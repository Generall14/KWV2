QT       += core gui

CONFIG += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KWV2
TEMPLATE = app

SOURCES += main.cpp \
    src/MainWindow.cpp \
    src/GraphicsView.cpp

HEADERS  += \ 
    src/MainWindow.hpp \
    src/GraphicsView.hpp
