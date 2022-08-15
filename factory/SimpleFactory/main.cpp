#include <iostream>
#include "SimpleFactory.h"
#include "Pizza.h"
#include "PizzaStore.h"
using namespace std;

int main()
{
    SimpleFactory* f = new SimpleFactory();
    PizzaStore* ps = new PizzaStore(f);
    auto *pizza1 = ps->orderPizza("cheese");
    auto *pizza2 = ps->orderPizza("clam");


    return 0;
}
