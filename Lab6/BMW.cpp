#include "BMW.h"

BMW::BMW() {
    name = "BMW";
    fuelCapacity = 80;
    fuelConsumption = 8;
    speed[(int)Weather::Rain] = 170;
    speed[(int)Weather::Sunny] = 210;
    speed[(int)Weather::Snow] = 130;
}

float BMW::GetFuelNeeded(float distance) const {
    return (fuelConsumption * distance) / 100;
}

float BMW::GetSpeed(Weather weather) const {
    return speed[(int)weather];
}

const char* BMW::GetName() const {
    return name;
}
