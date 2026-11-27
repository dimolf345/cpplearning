#include <iostream>
#include "Birthday.hpp"

Birthday::Birthday(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

Birthday::~Birthday()
{
}

void Birthday::printDate()
{
    std::cout << year << "/" << month << "/" << day << std::endl;
}