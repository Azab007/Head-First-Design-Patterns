#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include <string>
#include "SimpleFactory.h"
#include "Pizza.h"
class PizzaStore
{
    public:
        PizzaStore(SimpleFactory* f1) :f(f1) {}
        Pizza* orderPizza(std::string type){
            auto *p = f->createPizza(type);
            p->prepare();
            p->bake();
            p->cut();
            p->box();
            return p;

        }
    protected:

    private:
        SimpleFactory* f = nullptr;

};

#endif // PIZZASTORE_H
