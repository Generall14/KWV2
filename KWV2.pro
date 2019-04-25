QT       += core gui

CONFIG += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KWV2
TEMPLATE = app

SOURCES += main.cpp \
	src/GUIEngine/GraphicsView.cpp \
    src/ImgEngine/ImgEngine.cpp \
    src/ImgEngine/LoadManager.cpp \
    src/ImgEngine/DataQueue.cpp \
    src/ImgEngine/Zoomer.cpp \
    src/ImgEngine/Displayer.cpp \
    src/Plugins/Plugin.cpp \
    src/Plugins/PluginManager.cpp \
    src/Plugins/Buildin/FileManager.cpp \
	src/GUIEngine/GUIEngine.cpp \
    src/Engine.cpp

HEADERS  += \ 
	src/GUIEngine/GraphicsView.hpp \
    src/ImgEngine/ImgData.hpp \
    src/ImgEngine/ImgEngine.hpp \
    src/ImgEngine/LoadManager.hpp \
    src/ImgEngine/DataQueue.hpp \
    src/ImgEngine/Zoomer.hpp \
    src/ImgEngine/Displayer.hpp \
    src/Plugins/Plugin.hpp \
    src/Plugins/PluginManager.hpp \
    src/Plugins/Buildin/FileManager.hpp \
	src/GUIEngine/GUIEngine.hpp \
    src/Engine.hpp
