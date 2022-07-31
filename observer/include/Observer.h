#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
    public:
        virtual void update(double temp, double humidity, double pressure) = 0;
        virtual ~Observer() = default;

    protected:

    private:
};

#endif // OBSERVER_H
