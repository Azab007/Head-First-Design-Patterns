#ifndef MOCHA_H
#define MOCHA_H
#include "CondimentDecorator.h"
#include "Beverage.h"
#include <string>
class Mocha : public CondimentDecorator
{
    public:
        Mocha(Beverage *bb): CondimentDecorator(bb){}
        std::string getDesc() override {return b->getDesc() + ", Mocha";}
        double cost() override {return b->cost() + 0.2;}

    protected:

    private:
};

#endif // MOCHA_H
