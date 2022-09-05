#ifndef WAITRESS_H
#define WAITRESS_H

#include "MenuComponent.h"
class Waitress
{
    public:
        Waitress(MenuComponent* a):all_menus(std::move(a)) {}
        void printMenu() { all_menus->print(); }
    protected:

    private:
        MenuComponent* all_menus;
};

#endif // WAITRESS_H
