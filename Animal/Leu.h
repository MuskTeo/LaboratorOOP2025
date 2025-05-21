#pragma once
#include "Animal.h"

class Leu : public Animal {
public:
    Leu(std::string& nume, int varsta);
    std::string sunet() override;
    Leu& operator++() override;
    Leu operator++(int);
};
