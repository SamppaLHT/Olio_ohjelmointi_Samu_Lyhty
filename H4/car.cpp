#include "car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car() : model(""), brand("") {}

Car::Car(const string& newModel, const string& newBrand) : model(newModel), brand(newBrand) {}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setWheels(const Wheel& wheel) {
    objWheel1 = wheel;
    objWheel2 = wheel;
    objWheel3 = wheel;
    objWheel4 = wheel;
}

void Car::setEngine(const Engine& engine) {
    objEngine = engine;
}

void Car::printDetails() const {
    cout << "Auto: " << brand << " " << model << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}
