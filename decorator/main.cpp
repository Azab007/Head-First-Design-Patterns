#include <iostream>

using namespace std;
#include "Beverage.h"
#include "Espresso.h"
#include "Mocha.h"
#include "Soy.h"
int main()
{
    Beverage *b1 = new Espresso();
    cout << b1->getDesc() << " $ " << b1->cost()<< endl;
    Beverage *b2 = new Espresso();
    Beverage *b3 = new Mocha(b2);
    cout << b3->getDesc() << " $ " << b3->cost()<< endl;
    Beverage *b4 = new Soy(new Espresso());
    cout << b4->getDesc() << " $ " << b4->cost()<< endl;

    return 0;
}
