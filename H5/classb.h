#ifndef CLASSB_H
#define CLASSB_H
#include <string>

using namespace std;

class ClassB
{
public:
    ClassB();

    string getInfo() const;
    void setInfo(const string &newInfo);

private:
    string info;
};

#endif // CLASSB_H
