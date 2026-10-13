#include <iostream>


int main(int argc, char const *argv[]) {
    std::cout << "Please enter the first number: ";
    double num1, num2;

    char op;
    std::cin >> num1;
    std::cout << "What would you like to do?" << std::endl;
    std::cout << "+ -> plus\t- -> minus" << std::endl;
    std::cout << "/ -> divide\tx -> times " << std::endl;
    std::cout << "Answer: ";

    std::cin >> op;

    std::cout << "Please enter the second number: ";
    std::cin >> num2;
    double result;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        std::cout << "Operation invalid";
        break;
    }
    std::cout << "Result is " << result << std::endl;
    return 0;
}