#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include <iostream>
#include "FlyBehaviour.h"
class FlyNoWay : public FlyBehaviour
{
    public:
        void fly() override { std::cout << "I can't fly\n"; }

    protected:

    private:
};

#endif // FLYNOWAY_H
