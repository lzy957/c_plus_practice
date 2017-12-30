TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QT += core gui widgets

SOURCES += main.cpp \
    cgeomap.cpp \
    cgeometry.cpp \
    cgeopoint.cpp \
    cgeopolygon.cpp \
    cgeopolyline.cpp \
    cindex.cpp \
    clistsymbol.cpp \
    cnameindex.cpp \
    cquadtreept.cpp \
    crect.cpp \
    csearch.cpp \
    csymbol.cpp \
    cchncity.cpp \
    ccitylist.cpp \
    cgeofile.cpp \
    cgeolayer.cpp \
    character_encode.cpp \
    cutftogb.cpp

HEADERS += \
    cgeomap.h \
    cgeometry.h \
    cgeopoint.h \
    cgeopolygon.h \
    cgeopolyline.h \
    cindex.h \
    clistsymbol.h \
    cnameindex.h \
    cquadtreept.h \
    crect.h \
    csearch.h \
    csymbol.h \
    cchncity.h \
    ccitylist.h \
    cgeofile.h \
    cgeolayer.h \
    character_encode.h \
    cutftogb.h