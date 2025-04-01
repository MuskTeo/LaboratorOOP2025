#include "Circuit.h"
#include <iostream>

Circuit::Circuit() : carCount(0), length(0.0f), weather(Weather::Sunny) {}

void Circuit::SetLength(float l) {
    length = l;
}

void Circuit::SetWeather(Weather w) {
    weather = w;
}

void Circuit::AddCar(Masina* car) {
    if (carCount < 10) {
        cars[carCount++] = car;
    }
}

void Circuit::Race() {
    for (int i = 0; i < carCount; ++i) {
        float fuelNeeded = cars[i]->GetFuelNeeded(length);
        if (fuelNeeded <= cars[i]->GetFuelCapacity()) {
            float speed = cars[i]->GetSpeed(weather);
            if (speed > 0.0f) {
                times[i] = length / speed;
                finished[i] = true;
            }
            else {
                finished[i] = false;
                times[i] = -1.0f;
            }
        }
        else {
            finished[i] = false;
            times[i] = -1.0f;
        }
    }
}

void Circuit::ShowFinalRanks() {
    for (int i = 0; i < carCount - 1; ++i) {
        for (int j = i + 1; j < carCount; ++j) {
            if (finished[i] && finished[j] && times[j] < times[i]) {
                std::swap(cars[i], cars[j]);
                std::swap(times[i], times[j]);
                std::swap(finished[i], finished[j]);
            }
        }
    }

    std::cout << "Final Ranks:\n";
    for (int i = 0; i < carCount; ++i) {
        if (finished[i]) {
            std::cout << cars[i]->GetName() << " - Time: " << times[i] << " h\n";
        }
    }
}

void Circuit::ShowWhoDidNotFinish() {
    std::cout << "Did not finish:\n";
    for (int i = 0; i < carCount; ++i) {
        if (!finished[i]) {
            std::cout << cars[i]->GetName() << "\n";
        }
    }
}
