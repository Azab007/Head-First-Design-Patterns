#ifndef WHIP_H
#define WHIP_H
#include "CondimentDecorator.h"
#include "Beverage.h"
#include <string>

class Whip : public CondimentDecorator
{
    public:
        Whip(Beverage *bb) : CondimentDecorator(bb){}
        std::string getDesc() override {return b->getDesc() + ", Whip";}
        double cost() override {return b->cost() + 0.1;}

    protected:

    private:
};

#endif // WHIP_H
