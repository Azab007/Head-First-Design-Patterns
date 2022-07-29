#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "FlyBehaviour.h"
#include <iostream>
class FlyWithWings : public FlyBehaviour
{
    public:
        void fly() override {
            std::cout << "I'm flying!!\n";
        }

    protected:

    private:
};

#endif // FLYWITHWINGS_H
