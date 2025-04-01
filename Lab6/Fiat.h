#pragma once
#include "Masina.h"

class Fiat : public Masina {
public:
    Fiat();
    float GetFuelNeeded(float distance) const override;
    float GetSpeed(Weather weather) const override;
    const char* GetName() const override;
};
