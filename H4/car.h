#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include "engine.h"
#include "wheel.h"

using namespace std;

class Car
{
public:
    Car();
    Car(const string& model, const string& brand);

    void setEngine();
    void setWheels();

    string getModel() const;
    void setModel(const string& newModel);

    string getBrand() const;
    void setBrand(const string& newBrand);

    void printDetails() const;

private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    string model;
    string brand;
};

#endif // CAR_H
