#include <iostream>

class Myclass
{
private:
    int num;

public:
    Myclass()
    {
        num = 10;
    }

    friend void getNum(Myclass &cls); // in this way, the getNum can access private members, but it's not actually part of the class
};

void getNum(Myclass &cls)
{
    std::cout << cls.num << std::endl;
}

int main(int argc, char const *argfv[])
{
    Myclass cls;
    getNum(cls);
    return 0;
}