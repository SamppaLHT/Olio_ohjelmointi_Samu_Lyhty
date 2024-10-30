#include <iostream>
#include <iomanip>
using namespace std;

void calcSum(int a, int b)
{
    int sum = a + b;
    cout << "calcSum result: " << sum << endl;
}

void calcDiv(int a, int b)
{
    if(b == 0)
    {
        cout << "Error! value 2 is zero, function calcDiv cannot be completed" << endl;
    }
    else
    {
        float div = static_cast <float> (a) / b;
        cout << "calcDiv result: " << div << endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if(b == 0)
    {
        cerr << "Error! value 2 is zero, function retDiv cannot be completed" << endl;
        return 0;
    }
    else
    {
        return static_cast <float> (a) / b;
    }
}

int main()
{
    //store the inputs
    int a, b;
    cout << "Input value 1: ";
    cin >> a;
    cout << "Input value 2: ";
    cin >> b;

    //call functions calcSum and calcDiv
    calcSum(a, b);
    calcDiv(a, b);

    //call functions and store return values
    int retSumReturnValue = retSum(a, b);
    float retDivReturnValue = retDiv(a, b);

    cout << "retSum result: " << retSumReturnValue << endl;
    cout << "retDiv result: " << retDivReturnValue << endl;

    return 0;
}

