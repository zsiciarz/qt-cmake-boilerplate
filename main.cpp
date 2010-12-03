#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel w("Hello Qt & CMake world!");
    w.show();
    return a.exec();
}
