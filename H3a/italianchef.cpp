#include "italianchef.h"
#include <iostream>
#include <string>
using namespace std;

ItalianChef::ItalianChef(const string& name) : Chef(name) {
    cout << "Italian Chef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "Italian Chef " << name << " destruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

string ItalianChef::getName() const {
    return name;
}
