#pragma once
#include<vector>
#include "Animal.h"
class Zoo
{
private:
	std::vector<Animal*> animale;
public:
	~Zoo();
	Zoo& operator()(Animal* a);
	void print();
};

