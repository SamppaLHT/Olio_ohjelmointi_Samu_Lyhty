#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"


using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel("GT86");
    objCar.setYearModel(2010);
    objCar.printData();

    Rectangle *objRectangle = new Rectangle;
    objRectangle -> setWidth(10);
    objRectangle -> setHeight(33);
    objRectangle -> printCalc();
    delete objRectangle;
    objRectangle = nullptr;

    unique_ptr <Student> objStudent = make_unique <Student> ();
    objStudent -> setName("Tauno Testi");
    objStudent -> setStudentNumber(83701);
    objStudent -> setAverage(3.97);

    cout << "------------------" << endl;
    cout << "Name: " << objStudent -> getName() << endl;
    cout << "Student Number: " << objStudent -> getStudentNumber() << endl;
    cout << "Average grade: " << objStudent -> getAverage() << endl;
    cout << "------------------" << endl;

    return 0;
}
