#include <iostream>
#include <tuple>

int main(int argc, char const *argv[])
{
    std::tuple<std::string, int> person = {"Luca", 34};

    std::cout << std::get<0>(person) << std::endl;

    std::get<0>(person) = "Budda";

    std::cout << std::get<0>(person) << std::endl;

    std::tuple<double, char, bool> values;
    values = std::make_tuple(3.14, 'j', false);
    std::cout << std::get<0>(values) << std::endl;

    // when you have two tuples with the same data type, you can swap them
    std::tuple<int, int> swap1 = std::make_tuple(10, 15);
    std::tuple<int, int> swap2 = std::make_tuple(30, 60);
    swap1.swap(swap2);

    int a, b;
    std::tie(a, b) = swap1; // extract values from tuple

    std::cout << "A: " << a << "\n"
              << "B: " << b << std::endl;
    return 0;
}