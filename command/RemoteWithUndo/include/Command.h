#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>
class Command
{
    public:
		using command_vec = std::vector<Command *>;
		using cvec_size = std::vector<Command *>::size_type;
        virtual void executer() = 0;
        virtual void undo() = 0;
        virtual std::string getClassName() const = 0;
        virtual ~Command() = default;

    protected:

    private:
};

#endif // COMMAND_H
