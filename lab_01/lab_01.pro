TEMPLATE = app
TARGET = app.exe
INCLUDEPATH += . inc
QT += widgets gui core

OBJECTS_DIR = out
UI_DIR = inc
MOC_DIR = moc

# Input
HEADERS += $$system("find . -name '*.h' ! -name '*moc_*' ")
FORMS += $$system("find . -name '*.ui'")
SOURCES += $$system("find . -name '*.cpp' ! -name '*moc_*' ")