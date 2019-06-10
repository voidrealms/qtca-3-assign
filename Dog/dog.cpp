#include "dog.h"

Dog::Dog()
{
}

void Dog::speak()
{
    qInfo() << "bark bark";
}

void Dog::rollover()
{
    qInfo() << "*rolls over*";
}

void Dog::sit()
{
    qInfo() << "*sits*";
}
