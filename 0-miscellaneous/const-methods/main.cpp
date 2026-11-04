#include <iostream>

struct ClockOfTheLongNow
{
    ClockOfTheLongNow(int year) : _year(year) {}

    int get_year() const
    {
        return this->_year;
    }

private:
    int _year;
};

bool is_leap_year(ClockOfTheLongNow &clock)
{
    if (clock.get_year() % 4 > 0)
        return false;
    if (clock.get_year() % 100 > 0)
        return true;
    if (clock.get_year() % 400 > 0)
        return false;
    return true;
}

int main(int argc, char const *argv[])
{
    ClockOfTheLongNow test = ClockOfTheLongNow{2025};
    std::cout << test.get_year() << std::endl;
    std::cout << "Is leap: " << is_leap_year(test) << std::endl;
    return 0;
}