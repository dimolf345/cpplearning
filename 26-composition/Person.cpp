#include <iostream>
#include "Person.hpp"

// it's better to use this syntax when in the constructor we have another object as parameter
Person::Person(std::string _name, Birthday dob) : name(_name), dateOfBirth(dob) {};

void Person::toString()
{
    std::cout << name << " was born on" << std::endl;
    dateOfBirth.printDate();
};
