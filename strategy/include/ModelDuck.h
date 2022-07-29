#ifndef MODELDUCK_H
#define MODELDUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include <iostream>
class ModelDuck : public Duck
{
    public:
		ModelDuck();
		void display() const override { std::cout << "I'm a model duck"; }

    protected:

    private:


};

inline ModelDuck::ModelDuck() {
	flyBehaviour = std::make_unique<FlyNoWay>();
	quackBehaviour = std::make_unique<Quack>();
}

#endif // MODELDUCK_H
