#include "Sort.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    Sort s1(10, 1, 100);
    cout << "Random generated list: ";
    s1.Print();
    Sort s2{ 10, 40, 100, 5, 70 };
    cout << "List from initializer list: ";
    s2.Print();
    vector<int> vec = { 15, 30, 45, 60, 75, 90 };
    Sort s3(vec, 4);
    cout << "List from vector: ";
    s3.Print();
    Sort s5(5, 8, 16, 32, 64, 128);
    cout << "List from variadic parameters: ";
    s5.Print();
    cout << "\nSorting using Insertion Sort (ascending): ";
    s2.InsertSort(true);
    s2.Print();
    cout << "Sorting using Bubble Sort (descending): ";
    s3.BubbleSort(false);
    s3.Print();
    cout << "Sorting using QuickSort (ascending): ";
    s1.QuickSort(true);
    s1.Print();
    Sort s6("10,40,100,5,70");
    cout << "List from string: ";
    s6.Print();

    cout << "\nElement count in s1: " << s1.GetElementsCount() << endl;
    cout << "Element at index 2 in s5: " << s5.GetElementFromIndex(2) << endl;

    return 0;
}
