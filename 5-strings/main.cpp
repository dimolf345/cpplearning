#include <iostream>
#include <string>


int main(int arc, char const *argv[]) {
    std::string str = "Hello world! ";
    std::cout << str.length() << std::endl;

    //merging string
    std::string appending = "How are you?";
    // we can use the += operator or the apped method;
    std::cout << str.append(appending) << std::endl;
    std::cout << str + appending << std::endl;

    //remove the last char
    std::cout << "Before pop back: " << str << std::endl;
    str.pop_back();
    std::cout << str << std::endl;

    //compare the strings --> returns 0 if they are the same
    std::cout << "Are the same? " << str.compare("Hello world! How are you") << std::endl;

    //splitting the string
    std::cout << "Extracting Hello: " << str.substr(0, 5) << std::endl;

    //searching the string. //use rfind() to start from the end
    std::cout << "First index of \"world\": " << str.find("world") << std::endl;

    //replace part of the string
    std::cout << "Replace world with people: " << str.replace(str.find("world"), std::string("world").length(), "people") << std::endl;

    //remove part of the string
    std::cout << "Erasing people: " << str.erase(str.find("people"), std::string("people").length()) << std::endl;
    return 0;
}