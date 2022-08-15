#ifndef NEWYORKSTYLEPEPPERONIPIZZA_H
#define NEWYORKSTYLEPEPPERONIPIZZA_H

#include "Pizza.h"

class NewYorkStylePepperoniPizza : public Pizza
{
    public:
        NewYorkStylePepperoniPizza() {
    	name = "NY Style Pepperoni Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";

        toppings.push_back("Grated Reggiano Cheese");
        toppings.push_back("Sliced Pepperoni");
        toppings.push_back("Garlic");
        toppings.push_back("Onion");
        toppings.push_back("Mushrooms");
        toppings.push_back("Red Pepper");


        }

    protected:

    private:
};

#endif // NEWYORKSTYLEPEPPERONIPIZZA_H
