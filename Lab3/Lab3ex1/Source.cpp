#include<iostream>
#include "Math.h"
using namespace std;

int main()
{
	std::cout << Math::Add(2, 3) << std::endl;
	std::cout << Math::Add(2, 3, 5) << std::endl;
	std::cout << Math::Add(2.2, 3.1, 5.4) << std::endl;
	std::cout << Math::Add(2.2, 3.1) << std::endl;
	std::cout << Math::Mul(4, 5) << std::endl;
	std::cout << Math::Mul(4, 5, 6) << std::endl;
	std::cout << Math::Mul(2.2, 3.3) << std::endl;
	std::cout << Math::Mul(2.2, 3.3, 3.7) << std::endl;
	std::cout << Math::Add(5, 1, 2, 3, 4, 5) << std::endl;
	const char* str1 = "Hello, ";
	const char* str2 = "World!";
	char* result = Math::Add(str1, str2);

	if (result) {
		std::cout << "Add(\"Hello, \", \"World!\") = " << result << std::endl;
		delete[] result; 
	}
	else {
		std::cout << "Nu s a detectat input." << std::endl;
	}
	return 0;
}
