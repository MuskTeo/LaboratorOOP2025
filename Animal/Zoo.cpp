#include "Zoo.h"
#include <iostream>
using namespace std;
Zoo::~Zoo()
{
	for (auto a : animale)
		delete a;
}

Zoo& Zoo::operator()(Animal* a)
{
	animale.push_back(a);
	return *this;
}

void Zoo::print()
{
	for (auto& a : animale) 
		cout << (*a)() << "\n";
}

