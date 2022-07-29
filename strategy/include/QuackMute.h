#ifndef QUACKMUTE_H
#define QUACKMUTE_H

#include <iostream>
#include "QuackBehaviour.h"

class QuackMute : public QuackBehaviour
{
    public:
        void quack() override { std::cout << "<< Silence >>\n"; }

    protected:

    private:
};

#endif // QUACKMUTE_H
