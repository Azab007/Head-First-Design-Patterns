#ifndef DARKROAST_H
#define DARKROAST_H
#include "Beverage.h"

class DarkRoast : public Beverage
{
    public:
        DarkRoast() {desc = "DarkRoast";}
        double  cost()override{return 1.8;}

    protected:

    private:
};

#endif // DARKROAST_H
