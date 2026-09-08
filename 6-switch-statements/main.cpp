#include <iostream>


int main(int argc, char const *argv[]) {
    int dayOfWeek = 3;

    std::string day;

    //Nb: switch value must be integral/enum (e.g. int, char, enum) - NOT std::string or double
    //    case labels must be compile-time constants: literals (case 1), const/constexpr, or enum values
    switch (dayOfWeek)
    {
    case(1):
        day = "Monday";
        break;
    case(2):
        day = "Tuesday";
        break;
    default:
        day = "PD";
        std::cout << "Loser! " << std::endl;
        break;
    }

    std::cout << "Today is : " << day << std::endl;
    return 0;
}