#include <iostream>
#include <limits>


int main(int argc, char const *argv[]) {
    //Input single variable
    std::cout << "Please enter your age: ";
    int age;
    std::cin >> age;
    std::cout << "You are " << age << " years old" << std::endl; 


    //Input two variables
    std::cout << "Please enter your age and name: ";
    std::string name;

    // You can separate the two variables with a space or pressing enter
    std::cin >> age >> name;
    std::cout << name << " is "  << age << " years old." << std::endl;


    //Inserting a line
    std::cin.clear(); // clears only errros
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //resets the buffer
    std::string desc;
    std::cout << "Please enter the description: " << std::endl;
    std::getline(std::cin, desc);

    std:: cout << "Description : " << desc << std::endl;
    return 0;
}