#include "Volvo.h"

Volvo::Volvo() {
    name = "Volvo";
    fuelCapacity = 60;
    fuelConsumption = 8;
    speed[(int)Weather::Rain] = 120;
    speed[(int)Weather::Sunny] = 160;
    speed[(int)Weather::Snow] = 100;
}

float Volvo::GetFuelNeeded(float distance) const {
    return (fuelConsumption * distance) / 100;
}

float Volvo::GetSpeed(Weather weather) const {
    return speed[(int)weather];
}

const char* Volvo::GetName() const {
    return name;
}
