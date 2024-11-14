#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

#include <iostream>

class Animal
{
public:
    virtual void callOut();

    virtual~Animal();
};

#endif // ANIMAL_H
