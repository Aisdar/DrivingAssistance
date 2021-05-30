#-------------------------------------------------
#
# Project created by QtCreator 2021-05-22T23:59:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DrivingAssistance
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    logindialog.cpp \
    registerdialog.cpp \
    applicationwindow.cpp \
    drivingwidget.cpp \
    featurewidget.cpp \
    reversingwidget.cpp \
    settingwidget.cpp \
    surveywidget.cpp \
    videorecordwidget.cpp \
    processbarmenu.cpp \
    videoitem.cpp \
    videoviewwidget.cpp \
    mymenuwidget.cpp \
    myevent.cpp

HEADERS += \
    logindialog.h \
    registerdialog.h \
    applicationwindow.h \
    drivingwidget.h \
    featurewidget.h \
    reversingwidget.h \
    settingwidget.h \
    surveywidget.h \
    videorecordwidget.h \
    processbarmenu.h \
    videoitem.h \
    videoviewwidget.h \
    mymenuwidget.h \
    myevent.h

FORMS += \
    logindialog.ui \
    registerdialog.ui \
    applicationwindow.ui \
    drivingwidget.ui \
    featurewidget.ui \
    reversingwidget.ui \
    settingwidget.ui \
    surveywidget.ui \
    videorecordwidget.ui \
    processbarmenu.ui \
    videoitem.ui \
    videoviewwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += \
    $$PWD/api/net \
    $$PWD/api/config \
    $$PWD/api/helper \
    $$PWD/api/opencv \
    $$PWD/api/ui \
    /usr/local/include \
    /usr/local/include/opencv \
    /usr/local/include/opencv2


LIBS += /usr/local/lib/libopencv*



include(api/net/net.pri)
include(api/config/config.pri)
include(api/helper/helper.pri)
include(api/opencv/opencv.pri)
include(api/ui/ui.pri)

RESOURCES += \
    resource.qrc

MOC_DIR         = temp/moc
RCC_DIR         = temp/rcc
UI_DIR          = temp/ui
OBJECTS_DIR     = temp/obj
DESTDIR = bin
