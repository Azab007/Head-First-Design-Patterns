#include <iostream>
#include "SimpleRemote.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "Command.h"
#include "GarageUpCommand.h"
#include "GarageDoor.h"
using namespace std;

int main()
{
    SimpleRemote *r = new SimpleRemote();
    Light *l = new Light();
    GarageDoor *g = new GarageDoor();
    Command *c1 = new LightOnCommand(l);
    Command *c2 = new GarageUpCommand(g);
    r->setCommand(c1);
    r->buttonIsPressed();
    r->setCommand(c2);
    r->buttonIsPressed();

    return 0;
}
