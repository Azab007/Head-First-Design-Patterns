#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include <string>
#include "Pizza.h"
class PizzaStore
{
    public:
        Pizza* orderPizza(std::string type){
            auto *p = createPizza(type);
            p->prepare();
            p->bake();
            p->cut();
            p->box();
            return p;

        }
        virtual ~PizzaStore() = default;
    protected:
        virtual Pizza* createPizza(std::string type) = 0;

    private:
};

#endif // PIZZASTORE_H
