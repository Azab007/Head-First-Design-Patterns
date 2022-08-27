#ifndef NOCOMMAND_H
#define NOCOMMAND_H

#include "Command.h"
#include <string>
class NoCommand: public Command
{
    public:
        void executer() override {}
        void undo() override {}
        std::string getClassName() const override {return className;}

    protected:

    private:
        std::string className = "NoCommand";
};

#endif // NOCOMMAND_H
