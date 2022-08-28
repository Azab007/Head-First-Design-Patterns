#ifndef DUCK_H
#define DUCK_H


class Duck
{
    public:
        virtual void quack() = 0;
        virtual void fly() = 0;
        virtual ~Duck() = default;

    protected:

    private:
};

#endif // DUCK_H
