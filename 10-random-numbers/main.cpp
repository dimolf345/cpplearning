#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char const *argv[]) {
    std::srand(time(0));
    std::cout << (std::rand() % 10) + 1 << std::endl;
}