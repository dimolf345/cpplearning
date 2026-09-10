#include <iostream>

using std::cout;
using std::endl;

float sum(float num1, float num2) {
    return num1 + num2;
}

//default value
std::string sayHelloTo(std::string name = "Jack") {
    cout << "Hello " << name << "! " << endl;
    return "";
}

//Remember that functions definitions must ALWAYS be before function call, unless you define 
// at least the function declaration first
void sayHello(std::string name) {
    cout << "Hello " << name << "! " << endl;
}


int main(int argc, char const *argv[]) {
    sayHello("Luke");
    sayHelloTo();
    return 0;
}