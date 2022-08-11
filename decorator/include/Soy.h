#ifndef SOY_H
#define SOY_H
#include "CondimentDecorator.h"
#include "Beverage.h"
#include <string>

class Soy : public CondimentDecorator
{
    public:
        Soy(Beverage *bb) : CondimentDecorator(bb){}
        std::string getDesc() override {return b->getDesc() + ", Soy";}
        double cost() override {return b->cost() + 0.15;}

    protected:

    private:
};

#endif // SOY_H
