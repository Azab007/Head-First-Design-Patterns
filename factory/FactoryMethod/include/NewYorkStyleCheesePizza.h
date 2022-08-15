#ifndef NEWYORKSTYLECHEESEPIZZA_H
#define NEWYORKSTYLECHEESEPIZZA_H
#include "Pizza.h"

class NewYorkStyleCheesePizza : public Pizza
{
    public:
        NewYorkStyleCheesePizza() {
        	name = "NY Style Sauce and Cheese Pizza";
            dough = "Thin Crust Dough";
            sauce = "Marinara Sauce";
            toppings.push_back("Grated Reggiano Chesse");
        }

    protected:

    private:
};

#endif // NEWYORKSTYLECHEESEPIZZA_H
