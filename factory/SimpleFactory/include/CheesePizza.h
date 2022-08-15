#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H
#include "Pizza.h"

class CheesePizza : public Pizza
{
    public:
        CheesePizza() {
		name = "Cheese Pizza";
		dough = "Thin Crust Dough";
		sauce = "Marinara sauce";
		toppings.push_back("Grated Regiano Cheese");

        }

    protected:

    private:
};

#endif // CHEESEPIZZA_H
