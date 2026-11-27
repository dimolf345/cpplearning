#include <iostream>
#include "Birthday.hpp"
#include "Person.hpp" //since Person.hpp includes Birthday, we could in theory remove the include statement for Bday, but it's better to keep it

int main(int argc, char const *argv[])
{
    Birthday bday(5, 8, 2002);

    Person steve("Steve", bday);

    steve.toString();

    return 0;
}