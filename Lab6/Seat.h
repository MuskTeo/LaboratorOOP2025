#pragma once
#include "Masina.h"

class Seat : public Masina {
public:
    Seat();
    float GetFuelNeeded(float distance) const override;
    float GetSpeed(Weather weather) const override;
    const char* GetName() const override;
};
