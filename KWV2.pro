QT       += core gui

CONFIG += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KWV2
TEMPLATE = app

SOURCES += main.cpp \
    src/MainWindow.cpp \
    src/GraphicsView.cpp \
    src/ImgEngine/ImgEngine.cpp \
    src/ImgEngine/LoadManager.cpp \
    src/ImgEngine/DataQueue.cpp \
    src/ImgEngine/Zoomer.cpp \
    src/ImgEngine/Displayer.cpp

HEADERS  += \ 
    src/MainWindow.hpp \
    src/GraphicsView.hpp \
    src/ImgEngine/ImgData.hpp \
    src/ImgEngine/ImgEngine.hpp \
    src/ImgEngine/LoadManager.hpp \
    src/ImgEngine/DataQueue.hpp \
    src/ImgEngine/Zoomer.hpp \
    src/ImgEngine/Displayer.hpp
