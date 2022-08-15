#ifndef CHICAGOSTYLECLAMPIZZA_H
#define CHICAGOSTYLECLAMPIZZA_H
#include "Pizza.h"


class ChicagoStyleClamPizza : public Pizza
{
    public:
        ChicagoStyleClamPizza() {
	name = "Chicago Style Clam Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";
	toppings.push_back("Shredded Mozzarella Cheese");
	toppings.push_back("Frozen Clams from Chesapeake Bay");
        }
            void cut() const override {
            std::cout << "Cutting the pizza into square slices";
        }

    protected:

    private:
};

#endif // CHICAGOSTYLECLAMPIZZA_H
