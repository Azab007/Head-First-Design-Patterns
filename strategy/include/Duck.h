#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include <memory.h>
#include "FlyBehaviour.h"
#include "QuackBehaviour.h"
#include <memory>
class Duck
{
    public:
        void swim() const { std::cout << "all ducks float, even decoys!\n"; }
        virtual void display() const = 0;
        void performQuack() const {quackBehaviour->quack();}
        void performFly() const {flyBehaviour->fly();}
        void setQuackBehaviour(std::unique_ptr<QuackBehaviour> qb) {quackBehaviour = std::move(qb);}
        void setFlyBehaviour(std::unique_ptr<FlyBehaviour> fb) {flyBehaviour = std::move(fb);}
        virtual ~Duck() = default;

    protected:
        std::unique_ptr<FlyBehaviour> flyBehaviour = nullptr;
        std::unique_ptr<QuackBehaviour> quackBehaviour = nullptr;

    private:
};

#endif // DUCK_H
