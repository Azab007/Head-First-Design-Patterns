#ifndef NEWYORKSTORE_H
#define NEWYORKSTORE_H
#include "NewYorkStyleCheesePizza.h"
#include "NewYorkStyleClamPizza.h"
#include "NewYorkStylePepperoniPizza.h"
#include "PizzaStore.h"
#include "Pizza.h"
#include <string>
class NewYorkStore : public PizzaStore
{
    public:
        virtual ~NewYorkStore() {}

    protected:
        virtual Pizza* createPizza(std::string type) override {
            if (type == "cheese"){
                return new NewYorkStyleCheesePizza();
            }
            else if (type == "pepperoni"){
                return new NewYorkStylePepperoniPizza();
            }
            else if (type == "clam"){
                return new NewYorkStyleClamPizza();
            }
            else {
            return nullptr;

            }

        }

    private:
};

#endif // NEWYORKSTORE_H
