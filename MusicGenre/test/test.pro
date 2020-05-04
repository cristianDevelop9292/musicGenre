QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_musictest.cpp \
    ../src/musicgenre.cpp
INCLUDEPATH += ../src
