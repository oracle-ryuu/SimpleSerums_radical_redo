#-------------------------------------------------
#
# Project created by QtCreator 2017-03-23T14:15:20
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleSerum
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    searchinventory.cpp \
    removeinventory.cpp \
    addinventory.cpp \
    checkin.cpp \
    maindirectory.cpp \
    addpatient.cpp \
    removepatient.cpp \
    searchpatient.cpp \
    consultprescript.cpp \
    prescription.cpp \
    editpatient.cpp \
    editpatient2.cpp \
    listconsults.cpp \
    addstaff.cpp \
    removestaff.cpp \
    editstaff.cpp \
    editstaff2.cpp

HEADERS  += mainwindow.h \
    searchinventory.h \
    removeinventory.h \
    addinventory.h \
    checkin.h \
    maindirectory.h \
    addpatient.h \
    removepatient.h \
    searchpatient.h \
    fordatabase.h \
    consultprescript.h \
    prescription.h \
    editpatient.h \
    editpatient2.h \
    listconsults.h \
    addstaff.h \
    removestaff.h \
    editstaff.h \
    editstaff2.h

FORMS    += mainwindow.ui \
    searchinventory.ui \
    removeinventory.ui \
    addinventory.ui \
    checkin.ui \
    maindirectory.ui \
    addpatient.ui \
    removepatient.ui \
    searchpatient.ui \
    consultprescript.ui \
    prescription.ui \
    editpatient.ui \
    editpatient2.ui \
    listconsults.ui \
    addstaff.ui \
    removestaff.ui \
    editstaff.ui \
    editstaff2.ui

DISTFILES +=

RESOURCES += \
    bg2.qrc \
    bg3.qrc \
    bg4.qrc \
    red.qrc \
    green.qrc
