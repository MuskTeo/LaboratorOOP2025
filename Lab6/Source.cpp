#include "Circuit.h"
#include "Volvo.h"
#include "BMW.h"
#include "Fiat.h"
#include "Seat.h"
#include "RangeRover.h"

int main() {
    Circuit c;
    c.SetLength(800);
    c.SetWeather(Weather::Rain);
    c.AddCar(new Volvo());
    c.AddCar(new BMW());
    c.AddCar(new Fiat());
    c.AddCar(new Seat());
    c.AddCar(new RangeRover());
    c.Race();
    c.ShowFinalRanks();
    c.ShowWhoDidNotFinish();
    return 0;
}