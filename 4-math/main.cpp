#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]) {
    std::cout << pow(2, 3) << std::endl; // 2^3
    std::cout << sqrt(49) << std::endl;
    std::cout << "Rounding 5.2: " << round(5.2) <<std::endl;
    std::cout << "Rounding 5.55: " << round(5.55) << std::endl; // there also ceil and floor

    std::cout << fmax(8, 9) << std::endl;
    std::cout << fmin(8, 9) << std::endl;
    return 0;
}