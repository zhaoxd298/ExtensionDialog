#include "extensiondlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ExtensionDLG w;
    w.show();

    return a.exec();
}
