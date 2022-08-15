#ifndef CLAMPIZZA_H
#define CLAMPIZZA_H

#include "Pizza.h"

class ClamPizza : public Pizza
{
    public:
        ClamPizza() {

		name = "Clam Pizza";
		dough = "Thin Crust Dough";
		sauce = "Marinara sauce";
		toppings.push_back("Grated Regiano Clam");
		toppings.push_back("Fresh Clams");
        }
    protected:

    private:
};

#endif // CLAMPIZZA_H
