TEMPLATE = app
TARGET = Eksamen

DEFINES -= UNICODE

CONFIG -= qt

win32 {
    INCLUDEPATH += $(OGRE_HOME)\\include
    INCLUDEPATH += $(OGRE_HOME)\\include\\OIS
    INCLUDEPATH += $(OGRE_HOME)\\include\\OGRE
    INCLUDEPATH += $(OGRE_HOME)\\boost
    INCLUDEPATH += $(OGRE_HOME)\include\OGRE\Overlay
    INCLUDEPATH += ./include
    LIBS *= user32.lib
    LIBS += -L$(OGRE_HOME)\\boost\\lib
    release:LIBS += -L$(OGRE_HOME)\\lib\\release
    debug:LIBS += -L$(OGRE_HOME)\\lib\\debug
}

debug {
    LIBS *= -lOgreMain_d -lOIS_d -lOgreOverlay_d
}
release {
    LIBS *= -lOgreMain -lOIS -lOgreOverlay
}

SOURCES += \
    src/EksamensApp.cpp \
    src/OgreFramework.cpp \
    src/Player.cpp \
    src/playerstatus.cpp

HEADERS += \
    include/EksamensApp.h \
    include/OgreFramework.h \
    include/Player.h \
    include/playerstatus.h
