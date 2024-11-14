#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include <string>
using namespace std;

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(const string& name);

    virtual ~ItalianChef();

    void makePasta();
    string getName() const;
};

#endif // ITALIANCHEF_H
