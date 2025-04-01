#pragma once
#include "Masina.h"

class RangeRover : public Masina {
public:
    RangeRover();
    float GetFuelNeeded(float distance) const override;
    float GetSpeed(Weather weather) const override;
    const char* GetName() const override;
};
