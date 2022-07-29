#ifndef SQUEAK_H
#define SQUEAK_H

#include "QuackBehaviour.h"
#include <iostream>
class Squeak : public QuackBehaviour
{
    public:
        void quack() override {std::cout << "Squeak";}

    protected:

    private:
};

#endif // SQUEAK_H
