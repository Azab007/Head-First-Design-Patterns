#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include "Beverage.h"
#include <string>
class CondimentDecorator : public Beverage
{
    public:
        CondimentDecorator(Beverage *bb){b=bb;}
        virtual ~CondimentDecorator() = default;

    protected:
        Beverage *b;
    private:
};

#endif // CONDIMENTDECORATOR_H
