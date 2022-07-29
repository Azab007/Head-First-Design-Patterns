#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Quack.h"
#include "FlyWithWings.h"
#include "Duck.h"
#include <iostream>
#include <memory>
class MallardDuck : public Duck
{
    public:
        MallardDuck();
        void display() const override { std::cout << "I'm a real Mallard Duck\n"; }

    protected:

    private:
};

inline
MallardDuck::MallardDuck(){
    quackBehaviour = std::make_unique<Quack>();
    flyBehaviour = std::make_unique<FlyWithWings>();

}

#endif // MALLARDDUCK_H
