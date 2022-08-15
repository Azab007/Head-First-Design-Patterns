#ifndef PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H
#include "Pizza.h"


class PepperoniPizza : public Pizza
{
    public:
        PepperoniPizza() {
		name = "Pepperoni Pizza";
		dough = "Thick Crust Dough";
		sauce = "Marinara sauce";
		toppings.push_back("Grated Regiano Clam");
		toppings.push_back("Fresh Pepperonis");
        }

    protected:

    private:
};

#endif // PEPPERONIPIZZA_H
