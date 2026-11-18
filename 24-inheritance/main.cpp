#include <iostream>

class Car
{
public:
    double calculateFuel(int km)
    {
        return km / 2;
    }
};

class Truck : public Car
{
public:
    double calculateLoad(double width)
    {
        return width * 2;
    }
};

int main(int argc, char const *argv[])
{
    Car myCar;
    Truck myTruck;

    myCar.calculateFuel(20);
    myTruck.calculateFuel(15);
    myTruck.calculateLoad(45);
    return 0;
}