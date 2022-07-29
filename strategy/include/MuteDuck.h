#ifndef MUTEDUCK_H
#define MUTEDUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "QuackMute.h"
#include <iostream>
#include <memory>
class MuteDuck : public Duck
{
    public:
        MuteDuck();
		void display() const override { std::cout << "I am a mute duck\n"; }

    protected:

    private:
};
inline
MuteDuck::MuteDuck() {
	flyBehaviour = std::make_unique<FlyWithWings>();
	quackBehaviour = std::make_unique<QuackMute>();
}
#endif // MUTEDUCK_H
