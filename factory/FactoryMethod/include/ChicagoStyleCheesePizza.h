#ifndef CHICAGOSTYLECHEESEPIZZA_H
#define CHICAGOSTYLECHEESEPIZZA_H
#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza
{
    public:
        ChicagoStyleCheesePizza() {
	name = "Chicago Style Deep Dish Cheese Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";
	toppings.push_back("Shredded Mozzarella Cheese");
        }

        void cut() const override {
            std::cout << "cutting the pizza into square slices\n";
        }

    protected:

    private:
};

#endif // CHICAGOSTYLECHEESEPIZZA_H
