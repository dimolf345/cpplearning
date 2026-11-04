#include <iostream>
#include <set>

int main(int argc, char const *argv[])
{
    std::set<char> alpha = {'a', 'b', 'c', 'v', 'd', 'a'};
    alpha.insert('j');
    alpha.insert('b');
    alpha.erase('o'); // if the item is not present does not throw an exception

    if (alpha.find('r') != alpha.end())
    {
        std::cout << "Item found" << std::endl;
    }
    else
    {
        std::cout << "Item not found" << std::endl;
    }

    for (auto i = alpha.begin(); i != alpha.end(); i++)
    {
        std::cout << *i << std::endl;
    }
    return 0;
}