#ifndef REMOTEWITHUNDO_H
#define REMOTEWITHUNDO_H

#include "Command.h"
#include "NoCommand.h"
#include <cstddef>
#include <ostream>
#include <memory>
#include <string>

class RemoteWithUndo
{
    public:
        friend std::ostream& operator<<(std::ostream &os, const RemoteWithUndo &remote) {
            os << "\n------ Remote Control ------\n";
            for (Command::cvec_size i = 0; i < remote.onCommands.size(); ++i) {
                os << "[slot " << i << "] " << remote.onCommands[i]->getClassName()
                    << "\t" << remote.offCommands[i]->getClassName() << '\n';
            }
            os << "[undo] " << remote.undoCommand->getClassName() << '\n';
            return os;
        }
        RemoteWithUndo() = default;
		void setCommand(Command::cvec_size slot, Command *onCommand, Command *offCommand){

            	onCommands[slot] = onCommand;
                offCommands[slot] = offCommand;
		}
		void onButtonWasPushed(Command::cvec_size slot) {
            if (onCommands[slot] != nullptr) {
                onCommands[slot]->executer();
                undoCommand = onCommands[slot];
	}

		}
		void offButtonWasPushed(Command::cvec_size slot) {
            if (offCommands[slot] != nullptr) {
            offCommands[slot]->executer();
            undoCommand = offCommands[slot];
                }

		}
		void undoButtonWasPushed() { undoCommand->undo(); }


    protected:
		constexpr static Command::cvec_size SIZE = 7;
		std::shared_ptr<NoCommand> noCommand = std::make_shared<NoCommand>();
		Command *undoCommand = noCommand.get();
		Command::command_vec onCommands = Command::command_vec(SIZE, noCommand.get());
		Command::command_vec offCommands = Command::command_vec(SIZE, noCommand.get());

    private:
};

#endif // REMOTEWITHUNDO_H
