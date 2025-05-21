#pragma once
#include <string>
class Animal 
{protected:
		int varsta;
		std::string nume;
	public:
		Animal(const std::string& nume, int varsta) {
			this->nume = nume;
			this->varsta = varsta;
		}
		~Animal() = default;
		virtual std::string sunet()=0;
		std::string operator()() const {
			return "Nume: " + nume + ", Varsta: " + std::to_string(varsta) + ", Sunet: " + sunet();
		}

		 virtual Animal& operator++() = 0;

	
};