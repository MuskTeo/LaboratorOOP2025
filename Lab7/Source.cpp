#include <iostream>
#include<iomanip>
float operator""_Kelvin(long double a) {
    return (a - 273.15);
}
float operator""_Fahrenheit(long double a) {
    return (a - 32.0) * 5.0 / 9.0;
}
int main() {
    float a = 300.0_Kelvin;
    float b = 120.0_Fahrenheit;
  //  std::cout << std::fixed << std::setprecision(2); // 2 zecimale
    std::cout << "300 Kelvin in Celsius: " << a << "C\n";
    std::cout << "120 Fahrenheit in Celsius: " << b << "C\n";

    return 0;
}
