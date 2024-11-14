#include <iostream>
#include <string>

using namespace std;

#include "chef.h"
#include "italianchef.h"

int main()
{
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    cout << "name of the Italian Chef is " << italianChef.getName() << endl;
    return 0;
}
