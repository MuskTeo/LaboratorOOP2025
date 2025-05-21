#include "Elefant.h"

Elefant::Elefant(std::string* nume, int varsta):Animal(nume,varsta)
{
}

std::string Elefant::sunet()
{
	return "Prrr";
}

Elefant& Elefant::operator++()
{
	++varsta;
	return *this;
}

Elefant Elefant::operator++(int)
{
	Elefant copie = *this;
	++(*this);
	return copie;
}
