#include "qtest.h"

#include <QApplication>
QPushButton *btn[19][19];

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTest w;
    w.setButtons();
    w.show();
    return a.exec();
}
