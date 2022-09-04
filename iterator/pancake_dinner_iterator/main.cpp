#include <iostream>
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "Waitress.h"
using namespace std;

int main()
{
    auto pancakeHouseMenu = PancakeHouseMenu();
	auto dinerMenu = DinerMenu();

	auto waitress = Waitress(&pancakeHouseMenu, &dinerMenu);

	waitress.printMenu();
    return 0;
}
