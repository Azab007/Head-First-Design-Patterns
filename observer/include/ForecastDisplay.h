#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include "Observer.h"
#include "Subject.h"
#include <iostream>
#include <memory>
#include "DisplayElement.h"

class ForecastDisplay : public Observer, public DisplayElement
{
    public:
        ForecastDisplay() = default;
        ForecastDisplay(Subject *wd) : wd(wd) {wd->registerObserver(this);}
        void update(double t, double h, double p) override {
            prevPressure = currentPressure;
            currentPressure = p;
            display();
        }
        void display() const override {
        std::cout << "Forcast: ";
		if (currentPressure > prevPressure)
			std::cout << "Improving weather on the way!\n";
		else if (currentPressure == prevPressure)
			std::cout << "Forcast: More of the same\n";
		else if (currentPressure < prevPressure)
			std::cout << "Forcast: Watch out for cooler, rainy weather\n";
        }

    protected:

    private:
        double currentPressure = 29.92f;
		double prevPressure = 0.0f;
		Subject *wd = nullptr;
};

#endif // FORECASTDISPLAY_H
