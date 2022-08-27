#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "Command.h"
#include "Light.h"
#include <string>
class LightOffCommand : public Command
{
    public:
        LightOffCommand(Light *l):light(l) {}
        void executer() override {
            level = light->getLevel();
            light->off();
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
        std::string className = "LightOffCommand";
};

#endif // LIGHTOFFCOMMAND_H
