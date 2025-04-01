#pragma once
#include "Masina.h"

class Volvo : public Masina {
public:
    Volvo();
    float GetFuelNeeded(float distance) const override;
    float GetSpeed(Weather weather) const override;
    const char* GetName() const override;
};
