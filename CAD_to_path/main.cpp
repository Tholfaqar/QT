#include "cad_to_path.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CAD_to_path w;
    w.show();

    return a.exec();
}
