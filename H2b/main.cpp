#include <iostream>
#include <string>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    Car objCar1("Toyota", "GT86", 2008);
    Car objCar2("Volkswagen", "Golf GTI", 2024);
    Car objCar3("Mercedes Benz", "AMG GTR", 2018);

    carList.push_back(objCar1);
    carList.push_back(objCar2);
    carList.push_back(objCar3);

    carList[1].printData();

    for (int i = 0; i <= 2; i++)
    {
        carList[i].printData();
    }

    return 0;
}
