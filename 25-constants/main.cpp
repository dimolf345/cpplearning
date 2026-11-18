#include <iostream>

#define MY_NAME "Steve"
#define MY_AGE 20

class Car
{
};

class Map
{
private:
    int x = 15;
    // mutable int y = 10;
    const int y = 10;

public:
    Map(int a, int b) : x(a), y(b) {}
    // direct constructor allow to set constant variable at object instantiation
    void setPos() const
    {
        // const suffix indicated it won't edit any non-mutable variable of the class
        // this->x = 1; // cannot do it
        // this->y = 25; // allowed with the mutable prefix
        std::cout << "X: " << x << "\nY: " << y << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    const int x = 10;
    std::cout << x << std::endl;

    std::cout << x + 9 << std::endl;
    // std::cout << MY_CONSTANT << std::endl;
    std::cout << MY_NAME << std::endl;
    std::cout << MY_AGE << std::endl;

    Map myMap{10, 60};
    myMap.setPos();
    return 0;
}