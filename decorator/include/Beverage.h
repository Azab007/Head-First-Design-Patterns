#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
class Beverage
{
    public:
        virtual std::string getDesc(){return desc;}
        virtual double cost() = 0;
        virtual ~Beverage() = default;

    protected:
        std::string desc = "unknown Beverage";
    private:

};

#endif // BEVERAGE_H
