TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    crecord.cpp \
    cfile.cpp \
    cdataset.cpp \
    cindex.cpp \
    csearch.cpp \
    cadclassindex.cpp \
    cpyindex.cpp \
    cinterface.cpp

HEADERS += \
    crecord.h \
    cfile.h \
    cdataset.h \
    cindex.h \
    csearch.h \
    cadclassindex.h \
    cpyindex.h \
    cinterface.h
