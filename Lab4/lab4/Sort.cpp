#include "Sort.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdarg>

Sort::Sort(int count, int min, int max)
{
	srand(time(nullptr));
	for (int i = 0; i < count; i++)
		elements.push_back(min + rand() % (max - min + 1));
}

Sort::Sort(std::initializer_list<int> list)
{
	elements = list;
}

Sort::Sort(std::vector<int>& vec, int count)
{
	elements.assign(vec.begin(), vec.begin() + count);
}

Sort::Sort(int count, ...)
{
	int value;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++)
	{
		value = va_arg(args, int);
		elements.push_back(value);
	}
	va_end(args);
}
Sort::Sort(const std::string& numbers)
{
	std::stringstream ss(numbers);  
	std::string temp;

	while (std::getline(ss, temp, ',')) {  
		elements.push_back(std::stoi(temp));  
	}
}

void Sort::InsertSort(bool ascendent)
{
	int j=0,key,i;
	int n = elements.size();
	for ( i = 1; i < n; i++)
	{
		key = elements[i];
		 j = i - 1;
		 while (j >= 0 && (ascendent ? elements[j] > key:elements[j] < key))
		 {
			 elements[j + 1] = elements[j];
			 j--;
		 }
	elements[j + 1] = key;
	}
}

void Sort::QuickSort(bool ascendent) {
	if (ascendent) {
		std::sort(elements.begin(), elements.end());  
	}
	else {
		std::sort(elements.begin(), elements.end(), std::greater<int>()); 
	}
}

void Sort::BubbleSort(bool ascendent)
{
	int i, n=elements.size();
	bool swapped;
	do {
		swapped = false;
		for (i = 0; i < n - 1; i++) {
			if (ascendent ? elements[i] > elements[i + 1]:elements[i] < elements[i + 1])
			{
				std::swap(elements[i], elements[i + 1]);
				swapped = true;
			}
		}
	}
	while (swapped);
}

void Sort::Print()
{
	for (int num : elements) 
		std::cout << num << " ";
	std::cout << std::endl;
}

int Sort::GetElementsCount()
{
	return elements.size();
}

int Sort::GetElementFromIndex(int index)
{
	return (index>=0&&index<elements.size())?elements[index]:-1;
}
