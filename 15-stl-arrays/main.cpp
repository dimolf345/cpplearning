#include <iostream>
#include <array>
// La differenza principale è che gli STL array (quelli pressi dalla Standard Library) hanno la proprietà di size

int main(int argc, char const *argv[])
{
    std::array<int, 4> ages = {55, 12, 23, 44};

    for (int age : ages)
    {
        std::cout << age << std::endl;
    };

    std::cout << "Ages length : " << ages.size() << std::endl;

    //Utility methods
    std::cout << ages.front() << std::endl;
    std::cout << ages.back() << std::endl;
    std::cout << ages.at(2) << std::endl;
    ages.fill(10);
    for(int el : ages) std::cout<< el << std::endl;
}