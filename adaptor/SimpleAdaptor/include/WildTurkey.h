#ifndef WILDTURKEY_H
#define WILDTURKEY_H

#include "Turkey.h"
#include <iostream>

class WildTurkey : public Turkey
{
    public:
        void gobble() override {std::cout << "Gobble\n";}
        void fly() override {std::cout << "I'm flying short distance\n";}

    protected:

    private:
};

#endif // WILDTURKEY_H
