#include "Leu.h"

Leu::Leu(std::string& nume, int varsta):Animal(nume,varsta)
{
	
}

std::string Leu::sunet()
{
	return "Roar";
}

Leu Leu::operator++(int)
{
	Leu copie = *this;
	++(*this);
	return copie;
}

Leu& Leu::operator++()
{
	++varsta;
	return *this;

}
