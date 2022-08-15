#ifndef CHICAGOSTORE_H
#define CHICAGOSTORE_H
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "PizzaStore.h"
#include "Pizza.h"
#include <string>
class ChicagoStore : public PizzaStore
{
    public:


    protected:
        Pizza* createPizza(std::string type) override {
            if (type == "cheese"){
                return new ChicagoStyleCheesePizza();
            }
            else if (type == "pepperoni"){
                return new ChicagoStylePepperoniPizza();
            }
            else if (type == "clam"){
                return new ChicagoStyleClamPizza();
            }
            else {
            return nullptr;

            }
        }

    private:
};

#endif // CHICAGOSTORE_H
