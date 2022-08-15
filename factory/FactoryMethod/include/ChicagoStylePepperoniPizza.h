#ifndef CHICAGOSTYLEPEPPERONIPIZZA_H
#define CHICAGOSTYLEPEPPERONIPIZZA_H
#include "Pizza.h"


class ChicagoStylePepperoniPizza : public Pizza
{
    public:
        ChicagoStylePepperoniPizza() {
        	name = "Chicago Style Pepperoni Pizza";
            dough = "Extra Thick Crust Dough";
            sauce = "Plum Tomato Sauce";
            toppings.push_back("Shredded Mozzarella Cheese");
            toppings.push_back("Black Olives");
            toppings.push_back("Spinach");
            toppings.push_back("Eggplant");
            toppings.push_back("Sliced Pepperoni");


        }
            void cut() const override {
            std::cout << "Cutting the pizza into square slices";


        }
    protected:

    private:
};

#endif // CHICAGOSTYLEPEPPERONIPIZZA_H
