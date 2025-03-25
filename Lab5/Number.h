#include<string>
#include<iostream>
class Number
{
	int base;
	std::string value;
public:
	Number(const char* value, int base); // where base is between 2 and 16
	Number(const std::string& value, int base);
	Number(int decimalValue);
	Number(const Number& other);//copy
	~Number();

	Number& operator=(const Number& other);
	Number& operator=(int decimalValue);
	Number& operator=(const char* str);
	// add operators and copy/move constructor
	char operator[](int index)const;
	friend Number operator+(const Number& lhs, const Number& rhs);
	friend Number operator-(const Number& lhs, const Number& rhs);

	Number& operator+=(const Number& other);

	bool operator>(const Number& other) const;
	bool operator<(const Number& other) const;
	bool operator>=(const Number& other) const;
	bool operator<=(const Number& other) const;
	bool operator==(const Number& other) const;
	bool operator!=(const Number& other) const;

	Number& operator--();    // prefix
	Number operator--(int);  // postfix
	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
};
