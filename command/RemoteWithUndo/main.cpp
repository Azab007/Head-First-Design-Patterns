#include <iostream>

#include "RemoteWithUndo.h"
#include "Command.h"
#include "Light.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
using namespace std;

int main()
{
    auto *r = new RemoteWithUndo();
    auto l = Light("Kitchen");
    auto lightOffKitchen = LightOffCommand(&l);
    auto lightOnKitchen = LightOnCommand(&l);

    r->setCommand(0,&lightOnKitchen,&lightOffKitchen);

    std::cout << *r << endl;
    r->offButtonWasPushed(0);
    r->onButtonWasPushed(0);

    std::cout << *r << endl;
    r->undoButtonWasPushed();

    return 0;
}
