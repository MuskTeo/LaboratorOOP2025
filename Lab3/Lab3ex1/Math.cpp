#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <cstdarg>  
#include <cstring>  
#include <cstdlib>  


int Math::Add(int a, int b)
{
    return a+b;
}

int Math::Add(int a, int b, int c)
{
    return a+b+c;
}

int Math::Add(double a, double b)
{
    return a+b;
}

int Math::Add(double a, double b, double c)
{
    return a+b+c;
}

int Math::Mul(int a, int b)
{
    return a*b;
}

int Math::Mul(int a, int b, int c)
{
    return a*b*c;
}

int Math::Mul(double a, double b)
{
    return a*b;
}

int Math::Mul(double a, double b, double c)
{

    return a*b*c;
}

int Math::Add(int count, ...)
{
    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; i++)
        sum = sum + va_arg(args, int);
    va_end(args);
    return sum;
}

char* Math::Add(const char* str1, const char* str2)
{
    int leng1, leng2;
    if (!str1 || !str2)
        return nullptr;
    leng1 = std::strlen(str1);
    leng2 = std::strlen(str2);
    char* result = new char[leng1 + leng2 + 1];
    std::strcpy(result, str1);
    std::strcat(result, str2);
    return result;
}
