#include <iostream>
#include "Book.hpp"

main(int argc, char const *argv[])
{

    Book myBook;
    myBook.setAuthor("Jack");
    myBook.setTitle("Speed");
    myBook.setPages(35);

    std::cout << myBook.getTitle() << std::endl;
    std::cout << myBook.getAuthor() << std::endl;
    std::cout << myBook.getPages() << std::endl;
    return 0;
}