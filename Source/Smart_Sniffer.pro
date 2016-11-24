#-------------------------------------------------
#
# Project created by QtCreator 2016-11-19T21:48:33
#
#-------------------------------------------------

QT+= core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Smart_Sniffer
TEMPLATE = app

INCLUDEPATH += "G:/BSUIR/WpdPack/Include"
LIBS += "G:/BSUIR/WpdPack/Lib/wpcap.lib"
LIBS += "G:/BSUIR/WpdPack/Lib/packet.lib"

SOURCES += main.cpp\
    sniffer.cpp \
    toolbar.cpp \
    capture_menu.cpp \
    main_window.cpp \
    menu_bar.cpp \
    network_adapter_chooser.cpp \
    view_menu.cpp \
    packet_model.cpp \
    packet.cpp

HEADERS  += \
    sniffer.h \
    toolbar.h \
    capture_menu.h \
    main_window.h \
    menu_bar.h \
    network_adapter_chooser.h \
    view_menu.h \
    packet_model.h \
    datatypes.h \
    packet.h

RESOURCES += \
    icons.qrc
