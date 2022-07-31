#ifndef CURRENTCONDITIONDISPLAY_H
#define CURRENTCONDITIONDISPLAY_H

#include "Observer.h"
#include "Subject.h"
#include <iostream>
#include <memory>
#include "DisplayElement.h"

class CurrentConditionDisplay : public Observer, public DisplayElement
{
    public:
        CurrentConditionDisplay() = default;
        CurrentConditionDisplay(Subject *wd) : wd(wd) {wd->registerObserver(this);}
        void update(double t, double h, double p) override {
            temp = t;
            humidity = h;
            display();
        }
        void display() const override {
            std::cout << "Current Conditions: " << temp
		<< "F degree and " << humidity << "% humidity\n";
        }

    protected:

    private:
        double temp = 0.0f;
        double humidity = 0.0f;
        Subject *wd = nullptr;
};

#endif // CURRENTCONDITIONDISPLAY_H
