#include <iostream>
#include <map>

int main(int argc, char const *argv[])
{
    std::map<std::string, int> person = {
        {"age", 9},
        {"legs", 2},
        {"cars", 0}};

    person.insert(std::pair<std::string, int>("boobs", 2));
    std::cout << person["boobs"] << std::endl;

    if (!person.empty())
    {
        std::cout << "Dictionary is not empty" << std::endl;
    }

    std::cout << (person.find("age") == person.end() ? "Does not have age" : "Has age") << std::endl;
    for (auto i = person.begin(); i != person.end(); i++)
    {
        std::cout << i->first << std::endl;  // key
        std::cout << i->second << std::endl; // value
    }
    return 0;
}