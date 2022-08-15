#include <iostream>
#include "PizzaStore.h"
#include "ChicagoStore.h"
#include "NewYorkStore.h"
using namespace std;

int main()
{
    PizzaStore* p1 = new ChicagoStore();
    auto *pizza1 = p1->orderPizza("cheese");
    std::cout << "Ethan orderd a " << pizza1->getName() << "\n\n";

    PizzaStore* p2 = new NewYorkStore();
    auto *pizza2 = p2->orderPizza("clam");
    std::cout << "joel orderd a " << pizza2->getName() << "\n\n";
    return 0;
}
