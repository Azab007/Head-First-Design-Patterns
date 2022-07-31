#ifndef HEATINDEX_H
#define HEATINDEX_H

#include "Observer.h"
#include "Subject.h"
#include <iostream>
#include <memory>
#include "DisplayElement.h"

double computeHeatIndex(const double &t, const double &rh){
    	double index = (double)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh)
				+ (0.00941695 * (t * t)) + (0.00728898 * (rh * rh))
				+ (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
				(0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 *
					(rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
				(0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
				0.000000000843296 * (t * t * rh * rh * rh)) - (0.0000000000481975 * (t * t * t * rh * rh * rh)));

	return index;
}

class HeatIndex : public Observer, public DisplayElement
{
    public:
        HeatIndex() = default;
        HeatIndex(Subject *wd) : wd(wd) {wd->registerObserver(this);}
        void update(double t, double h, double p) override {
            heatIndex =  computeHeatIndex(t, h);
            display();
        }
        void display() const override {
            std::cout << "Heat Index is " << heatIndex << '\n';
        }

    protected:

    private:
        double heatIndex = 0.0f;
		Subject *wd;
};

#endif // HEATINDEX_H
