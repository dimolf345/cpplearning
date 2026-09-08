#include <iostream>


int main(int argc, char const *argv[]) {
    //argc is the amount of arguments + the .exe file
    std::cout << argc << std::endl;

    std::cout << argv[0] << std::endl;
    return 0;
}