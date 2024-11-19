#include <iostream>
#include <string>
#include "car.h"
#include "engine.h"
#include "wheel.h"

using namespace std;

int main()
{
    Car car("Corolla", "Toyota");

    car.setEngine();
    car.setWheels();

    car.printDetails();
    return 0;
}
