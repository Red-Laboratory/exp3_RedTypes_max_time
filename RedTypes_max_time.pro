TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    RedTypes.h

INCLUDEPATH += "/usr/local/Cellar/boost/1.76.0/include/"
LIBS += -L/usr/local/Cellar/boost/1.76.0/lib/
## Use only one of these:
LIBS += -lboost_filesystem -lboost_system# -lboost_asio# using dynamic lib
#LIBS += $${_BOOST_PATH}/lib/libboost_chrono-mt.a # using static lib
