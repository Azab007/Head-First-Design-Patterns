#ifndef GARAGEUPCOMMAND_H
#define GARAGEUPCOMMAND_H
#include "Command.h"
#include "GarageDoor.h"

class GarageUpCommand: public Command
{
    public:
        GarageUpCommand(GarageDoor* g):g(g) {}
        void executer() override {g->up();}

    protected:

    private:
        GarageDoor *g;
};

#endif // GARAGEUPCOMMAND_H
