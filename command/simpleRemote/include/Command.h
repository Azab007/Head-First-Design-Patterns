#ifndef COMMAND_H
#define COMMAND_H


class Command
{
    public:
        virtual void executer() = 0;
        virtual ~Command() = default;

    protected:

    private:
};

#endif // COMMAND_H
