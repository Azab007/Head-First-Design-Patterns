#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H
#include "Duck.h"
#include <iostream>
class MallardDuck : public Duck
{
    public:
        void quack() override {std::cout << "Quack\n";}
        void fly() override {std::cout << "I'm flying\n";}

    protected:

    private:
};

#endif // MALLARDDUCK_H
