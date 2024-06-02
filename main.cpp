#include <iostream>
#include <QApplication>
#include "GUI.h"
#include "Library.h"

using namespace std;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Library library;
    library.loadFromFile("library.txt");

    GUI gui(library);
    gui.show();

    return app.exec();
}