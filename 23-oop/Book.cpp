#include "Book.hpp"

Book::Book()
{
    title = "No title";
    author = "No author";
    pages = 0;
};

Book::Book(std::string _title, std::string author, int pages)
{
    title = _title;
    this->author = author;
    this->pages = pages;
}

std::string Book::getTitle()
{
    return this->title;
}

std::string Book::getAuthor()
{
    return this->author;
}

int Book::getPages()
{
    return this->pages * 2;
}

void Book::setTitle(std::string title)
{
    std::cout << "Setting the title" << std::endl;
    this->title = title;
}

void Book::setAuthor(std::string author)
{
    std::cout << "Setting the author" << std::endl;
    this->author = author;
}

void Book::setPages(int pages)
{
    std::cout << "Setting the pages" << std::endl;
    this->pages = pages;
}

Book::~Book()
{
    std::cout << "Destroyed book!" << std::endl;
}