#ifndef DECAF_H
#define DECAF_H
#include "Beverage.h"

class Decaf : public Beverage
{
    public:
        Decaf() {desc="Decaf";}
        double  cost()override{return 1.0;}

    protected:

    private:
};

#endif // DECAF_H
