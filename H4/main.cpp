#include <iostream>
#include <string>
#include "car.h"
#include "engine.h"
#include "wheel.h"

using namespace std;

int main()
{
    Engine engine(150, 2.0);
    Wheel wheel(17, "kesarengas");

    Car car("Corolla", "Toyota");
    car.setEngine(engine);
    car.setWheels(wheel);

    car.printDetails();
    return 0;
}
