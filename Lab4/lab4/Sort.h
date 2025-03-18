#include<vector>
#include <initializer_list>
#include<iostream>
class Sort
{
    std::vector<int> elements;

    // add data members
public:
    // add constuctors
    Sort(int count, int min, int max);
    Sort(std::initializer_list<int> list);
    Sort(std::vector<int>& vec, int count);
    Sort(int count, ...);
    Sort(const std::string& numbers);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};