#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H


class DisplayElement
{
    public:
        virtual void display() const = 0;
        virtual ~DisplayElement() = default;

    protected:

    private:
};

#endif // DISPLAYELEMENT_H
