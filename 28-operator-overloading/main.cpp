#include <iostream>
#include <stdexcept>

class Vector
{
private:
    int x, y;

public:
    // Creates a vector with the given x and y components.
    Vector(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    // Creates a vector with default-initialized components.
    Vector() {}

    // Subtracts another vector component by component.
    // The const reference avoids copying `other`; the trailing const means
    // this operation does not modify the left-hand vector. The result is a
    // new Vector returned by value.
    // Example: Vector difference = first - second;
    Vector operator-(const Vector &other) const
    {
        return Vector(x - other.x, y - other.y);
    }

    // Returns a writable reference to a component of a non-const vector.
    // Index 0 is x and index 1 is y. Returning a reference allows both
    // reading (int value = vector[0]) and writing (vector[0] = 5).
    // Throws std::out_of_range for any other index.
    int &operator[](std::size_t index)
    {
        if (index == 0)
            return x;
        if (index == 1)
            return y;
        throw std::out_of_range("Vector index must be 0 or 1");
    }

    // Const-vector version of operator[]. The trailing const allows this
    // overload to be called on a const Vector, and the const reference
    // prevents changing a component through the returned value.
    // Example: int value = constVector[0]; // reading is allowed
    const int &operator[](std::size_t index) const
    {
        if (index == 0)
            return x;
        if (index == 1)
            return y;
        throw std::out_of_range("Vector index must be 0 or 1");
    }
};

int main(int argc, char const *argfv[])
{
    Vector playerPos(10, 20);
    Vector enemyPos(40, 30);
    return 0;
}