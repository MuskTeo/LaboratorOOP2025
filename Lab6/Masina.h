#pragma once
#include "Weather.h"

class Masina {
protected:
    float fuelCapacity = 0.0f;
    float fuelConsumption = 0.0f;
    float speed[3] = { 0.0f, 0.0f, 0.0f };
    const char* name;

public:
    virtual ~Masina();
    virtual float GetFuelNeeded(float distance) const = 0;
    virtual float GetSpeed(Weather weather) const = 0;
    virtual const char* GetName() const = 0;

    int GetFuelCapacity() const { return fuelCapacity; }
};
