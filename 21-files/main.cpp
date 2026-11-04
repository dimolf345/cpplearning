#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    std::string line;
    std::ifstream MyFile("file.txt");

    while (getline(MyFile, line))
    {
        std::cout << line << std::endl;
    }
    MyFile.close();

    std::ofstream OutputFile; // also directly OutputFile("lol.txt");
    OutputFile.open("lol.txt");

    OutputFile << "Hello World!\nI am cool\n";

    OutputFile.is_open()
        ? std::cout << "File is OPEN!" << std::endl
        : std::cout << "File is closed" << std::endl; // check file status;

    OutputFile.close();

    OutputFile.is_open()
        ? std::cout << "File is OPEN!" << std::endl
        : std::cout << "File is closed" << std::endl; // check file status;

    OutputFile.open("lol.txt", std::ios::app); // opens the file in append mode
    OutputFile << "I forgot to add something!! \n";
    OutputFile.close();
    return 0;
}