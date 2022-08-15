#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "ClamPizza.h"
#include <string>
#include "Pizza.h"
class SimpleFactory
{
    public:
        SimpleFactory() = default;
        Pizza* createPizza(std::string type) {
            if (type == "cheese"){
                return new CheesePizza();
            }
            else if (type == "pepperoni"){
                return new PepperoniPizza();
            }
            else if (type == "clam"){
                return new ClamPizza();
            }
            else {
            return nullptr;

            }

        }

    protected:

    private:
};

#endif // SIMPLEFACTORY_H
