#include "Number.h"
#include<cstdlib>
#include<stdexcept>

Number::Number(const char* value, int base)
{
	this->value = value;
	this->base = base;
}

Number::Number(const std::string& value, int base)
{
	this->value = value;
	this->base = base;
}

Number::Number(int decimalValue)
{
	this->base = 10;
	this->value = std::to_string(decimalValue);
}

Number::Number(const Number& other)
{
	this->value = other.value;
	this->base = other.base;
}

Number::~Number()
{
}
std::string itoa_custom(int value, int base) {
	if (base < 2 || base > 16) throw std::invalid_argument("Base out of range");
	if (value == 0) return "0";

	std::string result;
	bool isNegative = (value < 0);
	value = std::abs(value);

	while (value > 0) {
		int digit = value % base;
		result += (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
		value /= base;
	}

	if (isNegative) result += '-';
	std::reverse(result.begin(), result.end());
	return result;
}
Number& Number::operator=(const Number& other)
{
	if (this != &other) {
		value = other.value;
		base = other.base;
	}
	return *this;
}

Number& Number::operator=(int decimalValue)
{
	value = itoa_custom(decimalValue, base);
	return *this;

	// TODO: insert return statement here
}

Number& Number::operator=(const char* str)
{
	// TODO: insert return statement here
	value = str;
	return *this;

}

char Number::operator[](int index) const
{
	return value[index];
}

Number& Number::operator+=(const Number& other) {
	*this = *this + other;
	return *this;
}

bool Number::operator>(const Number& other) const {
	return std::stoi(value, nullptr, base) > std::stoi(other.value, nullptr, other.base);
}
bool Number::operator<(const Number& other) const {
	return std::stoi(value, nullptr, base) < std::stoi(other.value, nullptr, other.base);
}
bool Number::operator>=(const Number& other) const {
	return !(*this < other);
}
bool Number::operator<=(const Number& other) const {
	return !(*this > other);
}
bool Number::operator==(const Number& other) const {
	return std::stoi(value, nullptr, base) == std::stoi(other.value, nullptr, other.base);
}
bool Number::operator!=(const Number& other) const {
	return !(*this == other);
}

Number& Number::operator--() {
	if (!value.empty()) value.erase(0, 1);
	return *this;
}

Number Number::operator--(int) {
	Number temp = *this;
	if (!value.empty()) value.pop_back();
	return temp;
}

void Number::SwitchBase(int newBase)
{
	int decimal = std::stoi(value, nullptr, base);
	value = itoa_custom(decimal, newBase);
	base = newBase;
}

void Number::Print()
{
	std::cout <<"value:  "<< value << "  baza: " << base << std::endl;
}

int Number::GetDigitsCount()
{
	return value.length();
}

int Number::GetBase()
{
	return base;
}

Number operator+(const Number& lhs, const Number& rhs) {
	int base = std::max(lhs.base, rhs.base);
	int val1 = std::stoi(lhs.value, nullptr, lhs.base);
	int val2 = std::stoi(rhs.value, nullptr, rhs.base);
	return Number(itoa_custom(val1 + val2, base).c_str(), base);
}

Number operator-(const Number& lhs, const Number& rhs) {
	int base = std::max(lhs.base, rhs.base);
	int val1 = std::stoi(lhs.value, nullptr, lhs.base);
	int val2 = std::stoi(rhs.value, nullptr, rhs.base);
	return Number(itoa_custom(val1 - val2, base).c_str(), base);
}
