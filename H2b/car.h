#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>

using namespace std;

class Car
{
public:
    Car(const string& brand, const string model, int yearModel);

    void printData();

    string getBrand() const;
    void setBrand(const string &newBrand);

    string getModel() const;
    void setModel(const string &newModel);

    int getYearModel() const;
    void setYearModel(int newYearModel);

private:
    string brand;
    string model;
    int yearModel;
};

#endif // CAR_H
