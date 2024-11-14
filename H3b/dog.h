#ifndef DOG_H
#define DOG_H

using namespace std;

#include "animal.h"

class Dog : public Animal
{
public:
    virtual void callOut() override;

    ~Dog();
};

#endif // DOG_H
