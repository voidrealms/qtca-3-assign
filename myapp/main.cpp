#include <QCoreApplication>
#include "../Dog/dog_global.h"
#include "../Dog/dog.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Dog dog;
    dog.sit();
    dog.rollover();
    dog.speak();


    return a.exec();
}
