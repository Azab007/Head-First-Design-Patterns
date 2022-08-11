#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "Beverage.h"
class HouseBlend : public Beverage
{
    public:
        HouseBlend() {desc = "HouseBlend";}
        double  cost()override{return 0.89;}

    protected:

    private:
};

#endif // HOUSEBLEND_H
