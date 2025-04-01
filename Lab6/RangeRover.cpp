#include "RangeRover.h"

RangeRover::RangeRover() {
    name = "RangeRover";
    fuelCapacity = 80;
    fuelConsumption = 12;
    speed[(int)Weather::Rain] = 110;
    speed[(int)Weather::Sunny] = 160;
    speed[(int)Weather::Snow] = 100;
}

float RangeRover::GetFuelNeeded(float distance) const {
    return (fuelConsumption * distance) / 100;
}

float RangeRover::GetSpeed(Weather weather) const {
    return speed[(int)weather];
}

const char* RangeRover::GetName() const {
    return name;
}
