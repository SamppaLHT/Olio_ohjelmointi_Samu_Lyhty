#include "car.h"
#include <string>
#include <iostream>

using namespace std;

Car::Car(const string& brand, const string model, int yearModel)
    :brand(brand), model(model), yearModel(yearModel) {}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout << "------------------" << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Yearmodel: " << yearModel << endl;
    cout << "------------------" << endl;
}


