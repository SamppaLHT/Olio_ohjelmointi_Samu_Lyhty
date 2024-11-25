#include <iostream>'
#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"

using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    cout << "<><><><><><><><><><><><><><><><><><>VAIHE 1<><><><><><><><><><><><><><><><><><>" << endl;

    cout << "a:n arvo on: " << a << " ja osoite on:" << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on:" << &b << endl;
    cout << "----------------------------------------------" << endl;

    int *myPointer = nullptr;

    myPointer = &a;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << "----------------------------------------------" << endl;

    myPointer = &b;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << "----------------------------------------------" << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "ref:n osoittaman muistipaikan arvo on: " << refA << endl;

    cout << "<><><><><><><><><><><><><><><><><><>VAIHE 2<><><><><><><><><><><><><><><><><><>" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout << "<><><><><><><><><><><><><><><><><><>VAIHE 3<><><><><><><><><><><><><><><><><><>" << endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;

    cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;


    return 0;
}
