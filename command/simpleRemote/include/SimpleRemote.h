#ifndef SIMPLEREMOTE_H
#define SIMPLEREMOTE_H

#include "Command.h"

class SimpleRemote
{
    public:
        SimpleRemote() = default;
        void setCommand(Command *c) {
        s = c;
        }
        void buttonIsPressed(){
            s->executer();
        }

    protected:

    private:
        Command *s;
};

#endif // SIMPLEREMOTE_H
