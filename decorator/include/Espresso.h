#ifndef ESPRESSO_H
#define ESPRESSO_H
#include "Beverage.h"

class Espresso : public Beverage
{
    public:
        Espresso() {desc = "Espresso";}
        double  cost()override{return 1.99;}

    protected:

    private:
};

#endif // ESPRESSO_H
