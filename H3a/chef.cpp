#include "chef.h"
#include <iostream>
#include <string>
using namespace std;

Chef::Chef(const string& name) {
    this->name = name;
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef() {
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup() {
    cout << "Chef " << name << " makes pasta" << endl;
}
