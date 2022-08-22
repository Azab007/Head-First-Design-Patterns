#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include "Command.h"
#include "Light.h"
class LightOnCommand : public Command
{
    public:
        LightOnCommand(Light* l):l(l) {}
        void executer() override {l->on();}

    protected:

    private:
        Light *l;

};

#endif // LIGHTONCOMMAND_H
