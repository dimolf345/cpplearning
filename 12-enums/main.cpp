#include <iostream>

enum ErrorNum {
    A, // 0
    B, // 1
    C = 99,
    D, // 100
    E // 101
};

enum ProcessError {
    UserInputError,
    AsyncError
};

enum Elements {
    water,
    fire,
    earth,
    air
};

int main(int argc, char const *argv[]) {
    ProcessError err = UserInputError;
    std::cout << "Error no: " << err << std::endl;
    
    Elements me = Elements::water;

    switch (me)
    {
    case Elements::air:
        std::cout << "My element is air" << std::endl;
        break;
    case Elements::earth:
        std::cout << "My Alement is ..." << std::endl;
        break;
    default:
        break;
    }
    return 0;
}