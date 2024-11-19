#include "wheel.h"
#include <string>

using namespace std;

Wheel::Wheel() : size(0), type("") {}
Wheel::Wheel(int newSize, const string& newType) : size(newSize), type(newType) {}

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}
