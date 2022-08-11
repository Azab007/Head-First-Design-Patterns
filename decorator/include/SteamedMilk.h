#ifndef STEAMEDMILK_H
#define STEAMEDMILK_H
#include "CondimentDecorator.h"
#include "Beverage.h"
#include <string>

class SteamedMilk : public CondimentDecorator
{
    public:
        SteamedMilk(Beverage *bb) : CondimentDecorator(bb){}
        std::string getDesc() override {return b->getDesc() + ", SteamedMilk";}
        double cost() override {return b->cost() + 0.1;}

    protected:

    private:
};

#endif // STEAMEDMILK_H
