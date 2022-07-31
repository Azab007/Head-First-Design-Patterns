#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Subject.h"
#include "Observer.h"
#include <list>
class WeatherData : public Subject
{
    public:
        WeatherData() = default;
        void registerObserver(Observer *o) override {observers.push_back(o);}
        void removeObserver(Observer *o) override {
            if (!observers.empty()) {
                observers.remove(o);
            }

        }

        void notifyObservers() override {
            	for (auto o : observers)
                    o->update(temp, humidity, pressure);
        }

        void measurementsChanged() {notifyObservers();}
        void setMeasurements(const double &t,const double &h,const double &p){
            temp = t;
            humidity = h;
            pressure = p;
            measurementsChanged();
        }
    protected:

    private:
        double temp = 0.0f;
        double humidity = 0.0f;
        double pressure = 0.0f;
        std::list<Observer *> observers = {};
};

#endif // WEATHERDATA_H
