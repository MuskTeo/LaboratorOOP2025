#include <iostream>
#include <chrono>
#include <thread>
#include "Canvas.h"

int main()
{
    using namespace std::this_thread;
    using namespace std::chrono;

    Canvas Canvas(20,20);
    Canvas.Clear();

    Canvas.DrawCircle(15, 15, 5, '*');
    Canvas.FillCircle(15, 15, 5, '-');
    Canvas.Print();
    sleep_for(seconds(2)); //mic delay ce permite admirarea fiecarui desen
    Canvas.Clear();

    Canvas.DrawRect(5, 5, 12, 12, '*');
    Canvas.FillRect(5, 6, 12, 12, '-');
    Canvas.Print();
    sleep_for(seconds(2));
    Canvas.Clear();
    Canvas.SetPoint(5, 7, '*');
    Canvas.SetPoint(8, 10, '*');
    Canvas.Print();
    Canvas.Clear();
    Canvas.DrawLine(3, 0, 12, 12, '-');
    Canvas.Print();
    sleep_for(seconds(2));
}

