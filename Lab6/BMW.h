#pragma once
#include "Masina.h"

class BMW : public Masina {
public:
    BMW();
    float GetFuelNeeded(float distance) const override;
    float GetSpeed(Weather weather) const override;
    const char* GetName() const override;
};
