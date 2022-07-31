#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include <iostream>
#include <memory>
#include "StatisticsDisplay.h"
#include "ForecastDisplay.h"
#include "HeatIndex.h"

int main()
{
    auto weatherData = WeatherData();
	auto currentDisplay = CurrentConditionDisplay(&weatherData);
    auto statsDisplay = StatisticsDisplay(&weatherData);
    auto forcastDisplay = ForecastDisplay(&weatherData);
	auto heatIndex = HeatIndex(&weatherData);
	weatherData.setMeasurements(80, 65, 30.4f);
	weatherData.setMeasurements(82, 70, 29.2f);
    return 0;
}
