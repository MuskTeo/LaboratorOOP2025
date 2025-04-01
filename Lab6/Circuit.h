#pragma once
#include "Masina.h"
#include "Weather.h"



class Circuit {
    Masina* cars[10];
    float times[10];
    bool finished[10];
    int carCount;
    float length;
    Weather weather;

public:
    Circuit();
    void SetLength(float l);
    void SetWeather(Weather w);
    void AddCar(Masina* car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};
