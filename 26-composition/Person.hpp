#ifndef PERSON_H

#define PERSON_h
#include <string>
#include "Birthday.hpp"

class Person
{
private:
    std::string name;
    Birthday dateOfBirth;

public:
    Person(std::string _name, Birthday dob);
    void toString();

    ~Person()
    {
    }
};

#endif