#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "Observer.h"
#include "Subject.h"
#include <iostream>
#include <memory>
#include "DisplayElement.h"
class StatisticsDisplay : public Observer, public DisplayElement
{
    public:
        StatisticsDisplay() = default;
        StatisticsDisplay(Subject *wd) : wd(wd) {wd->registerObserver(this);}
        void update(double t, double h, double p) override {
            tempSum += t;
            ++numberOfReadings;
            if (t < minTemp)
                minTemp = t;
            if (t > maxTemp)
                maxTemp = t;
            display();
        }
        void display() const override {
	std::cout << "Avg/Max/Min Temperature = " <<
		tempSum / numberOfReadings << "/" << maxTemp << "/" << minTemp << '\n';;
        }
    protected:

    private:
        double minTemp = 200.0f;
		double maxTemp = 0.0f;
		double tempSum = 0.0f;
		int numberOfReadings = 0;
		Subject *wd = nullptr;
};

#endif // STATISTICSDISPLAY_H
