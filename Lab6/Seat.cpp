#include "Seat.h"

Seat::Seat() {
    name = "Seat";
    fuelCapacity = 55;
    fuelConsumption = 7;
    speed[(int)Weather::Rain] = 100;
    speed[(int)Weather::Sunny] = 150;
    speed[(int)Weather::Snow] = 90;
}

float Seat::GetFuelNeeded(float distance) const {
    return (fuelConsumption * distance) / 100;
}

float Seat::GetSpeed(Weather weather) const {
    return speed[(int)weather];
}

const char* Seat::GetName() const {
    return name;
}
