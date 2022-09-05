#ifndef MENU_H
#define MENU_H

#include "MenuComponent.h"
#include <iostream>
#include <string>
#include <string_view>
#include <list>

class Menu : public MenuComponent
{
    public:
        Menu(std::string_view n, std::string_view d) : name(n), description(d) {}
		void add(MenuComponent* menuComponent) override {
			menuComponents.push_back(menuComponent); }
		void remove(MenuComponent*  menuComponent) override {
			menuComponents.remove(menuComponent); }
		std::string getName() const override { return name; }
		std::string getDescription() const override { return description; }
		void print() const override {
            std::cout << '\n' << getName();
            std::cout << ", " << getDescription() << '\n';
            std::cout << "----------------------\n";
            for (const auto &menuComponent : menuComponents)
                menuComponent->print() ;
		}

    protected:

    private:
		std::list<MenuComponent*> menuComponents;
		std::string name;
		std::string description;
};

#endif // MENU_H
