#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car
{
private:
    string model;
    string brand;
    int yearModel;

public:
    Car();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    int getYearModel() const;
    void setYearModel(int newYearModel);
    void printData();
};

#endif // CAR_H
