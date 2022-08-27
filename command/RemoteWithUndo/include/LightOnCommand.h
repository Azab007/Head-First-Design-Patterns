#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"
#include <string>
class LightOnCommand : public Command
{
    public:
        LightOnCommand(Light *l):light(l) {}
        void executer() override {
            level = light->getLevel();
            light->on();
        }
        void undo() override {
            light->dim(level);
        }
        std::string getClassName() const override {
            return className;
        }

    protected:

    private:
        Light *light;
        int level = 0;
        std::string className = "LightOnCommand";
};

#endif // LIGHTONCOMMAND_H
