QT       += core gui opengl
LIBS += -framework OpenGL

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

TARGET = MYGL
TEMPLATE = app


SOURCES += main.cpp\
    ball.cpp \
    block.cpp \
    game.cpp \
    paddle.cpp \
    score.cpp

HEADERS  += \
    ball.h \
    block.h \
    game.h \
    paddle.h \
    score.h

FORMS    +=

#LIBS    += -lopengl32

RESOURCES += \
    textures.qrc

DISTFILES += \
    ../background copy.jpg
