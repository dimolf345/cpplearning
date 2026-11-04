#include <iostream>
#include <fstream>

#define NUMBER int // alias

int main(int argc, char const *argv[])
{
#if 1 // this part of the code will be evaluated at compiled time. If the condition is false, the part of the code will be removed
    std::cout << "I am cool" << std::endl;

#endif

    return 0;
}