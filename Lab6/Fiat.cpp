#include "Fiat.h"

Fiat::Fiat() {
    name = "Fiat";
    fuelCapacity = 50;
    fuelConsumption = 6;
    speed[(int)Weather::Rain] = 90;
    speed[(int)Weather::Sunny] = 120;
    speed[(int)Weather::Snow] = 70;
}

float Fiat::GetFuelNeeded(float distance) const {
    return (fuelConsumption * distance) / 100;
}

float Fiat::GetSpeed(Weather weather) const {
    return speed[(int)weather];
}

const char* Fiat::GetName() const {
    return name;
}
