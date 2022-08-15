#ifndef NEWYORKSTYLECLAMPIZZA_H
#define NEWYORKSTYLECLAMPIZZA_H
#include "Pizza.h"

class NewYorkStyleClamPizza : public Pizza
{
    public:
        NewYorkStyleClamPizza() {
	name = "NY Style Clam Pizza";
	dough = "Thin Crust Dough";
	sauce = "Marinara Sauce";
	toppings.push_back("Grated Reggiano Cheese");
	toppings.push_back("Fresh Clams from Long Island Sound");
        }

    protected:

    private:
};

#endif // NEWYORKSTYLECLAMPIZZA_H
