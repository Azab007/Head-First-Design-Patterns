#ifndef WAITRESS_H
#define WAITRESS_H


#include "DinerMenu.h"
#include "DinerMenuIterator.h"
#include "Iterator.h"
#include "PancakeHouseMenu.h"
#include "PancakeHouseMenuIterator.h"
#include <iostream>
#include <memory>

class Waitress {
	public:
		Waitress(PancakeHouseMenu *phm, DinerMenu *dm) :
			pancakeHouseMenu(phm), dinerMenu(dm) {}
		void printMenu() const;
		void printMenu(Iterator<MenuItem> *iteator) const;
	private:
		PancakeHouseMenu *pancakeHouseMenu;
		DinerMenu *dinerMenu;
};

inline
void
Waitress::printMenu() const
{
		auto pancakeIterator = pancakeHouseMenu->createIterator();
		auto dinerIterator = dinerMenu->createIterator();

		std::cout << "MENU\n----\nBREAKFAST\n";
		printMenu(pancakeIterator.get());
		std::cout << "\nLUNCH\n";
		printMenu(dinerIterator.get());
}

inline
void
Waitress::printMenu(Iterator<MenuItem> *iteator) const
{
	while (iteator->hasNext()) {
		auto menuItem = iteator->next();
		std::cout << menuItem->getName() << ", ";
		std::cout << menuItem->getPrice() << " -- ";
		std::cout << menuItem->getDescription() << '\n';
	}
}

#endif // WAITRESS_H
