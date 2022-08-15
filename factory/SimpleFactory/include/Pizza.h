#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>
#include <vector>

class Pizza
{
    public:
        Pizza() = default;
		virtual void prepare() const {
	std::cout << "Preparing " + name;
	std::cout << "Tossing dough...\n";
	std::cout << "Adding sauce...\n";
	std::cout << "Adding toppings: \n";
	for (const auto &topping : toppings)
		std::cout << "   " + topping << '\n';
}
		virtual void bake() const {	std::cout << "Bake for 25 minutes at 350\n"; }
		virtual void cut() const { std::cout << "Cutting the pizza into diagonal slices\n"; }
		virtual void box() const { std::cout << "Place pizza in official PizzaStore box\n"; }
        std::string getName() {return name;}
        virtual ~Pizza() = default;

    protected:
		std::string name = {};
		std::string dough = {};
		std::string sauce = {};
		std::vector<std::string> toppings = {};
    private:
};

#endif // PIZZA_H
