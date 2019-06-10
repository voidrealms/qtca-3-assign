#ifndef DOG_H
#define DOG_H

#include "dog_global.h"
#include <QDebug>

class DOGSHARED_EXPORT Dog
{

public:
    Dog();
    void speak();
    void rollover();
    void sit();

};

#endif // DOG_H
