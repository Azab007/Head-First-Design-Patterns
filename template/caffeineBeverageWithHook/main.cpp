#include <iostream>
#include "CoffeWithHook.h"
#include "TeaWithHook.h"
using namespace std;

int main()
{
    CoffeWithHook *c = new CoffeWithHook();
    c->prepareRecipe();
    TeaWithHook *t = new TeaWithHook();
    t->prepareRecipe();

    return 0;
}
