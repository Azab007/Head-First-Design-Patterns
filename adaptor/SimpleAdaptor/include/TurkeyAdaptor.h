#ifndef TURKEYADAPTOR_H
#define TURKEYADAPTOR_H

#include "Duck.h"
#include "Turkey.h"
#include <iostream>
class TurkeyAdaptor : public Duck
{
    public:
        TurkeyAdaptor(Turkey *t): t(t) {}
        void quack() {t->gobble();}
        void fly() {

            for(int i = 0; i < 5 ; i++)
                t->fly();
        }

    protected:

    private:
        Turkey *t;
};

#endif // TURKEYADAPTOR_H
