#ifndef QUACK_H
#define QUACK_H

#include <iostream>
#include "QuackBehaviour.h"
class Quack : public QuackBehaviour
{
    public:
        void quack() override {
             std::cout << "Quack\n";
        }

    protected:

    private:
};

#endif // QUACK_H
