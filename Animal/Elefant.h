#pragma once
#include "Animal.h"
class Elefant :
    public Animal
{
public:
    Elefant(const std::string* nume, int varsta);
    std::string sunet() override;
    Elefant& operator++() override;
    Elefant operator++(int);
};

