#include <iostream>

int main(int argc, char const *arvg[]) {
    try {
        throw "sadada";
    } catch(int err) { // using catch(...) will catch any error thrown
        std::cout << "Some error! Oh no...Error: " << err << std::endl;
    } catch (...) {
        std::cout << "POrco dio" << std::endl;
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}