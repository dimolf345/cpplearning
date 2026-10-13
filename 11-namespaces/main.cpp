#include <iostream>

namespace stuffs {
    int sum(int x , int y) {
        return x + y;
    }

    int cout(std::string num) {
        return std::stoi(num);
    }
}


int main(int argc, char const *argv[]) {
    std::cout << stuffs::cout("12") + 9 << std::endl;
    return 0;
}