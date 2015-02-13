#-------------------------------------------------
#
# Project created by QtCreator 2014-12-06T15:13:24
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Sorts
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    source/sorts.cpp \
    source/insert.cpp \
    source/select.cpp \
	source/shell.cpp \
	source/merge.cpp \
    source/quick.cpp \
    source/simple_data.cpp

HEADERS += \
    include/insert.h \
    include/sorts.h \
    include/select.h \
	include/shell.h \
	include/merge.h \
    include/quick.h \
    include/simple_data.h
