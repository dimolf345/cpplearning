#ifndef BOOK_H
#define BOOK_H

#include <iostream>

class Book
{
private:
    std::string title, author;
    int pages;

public:
    Book();
    Book(std::string _title, std::string author, int pages);

    // getters
    std::string getTitle();
    std::string getAuthor();
    int getPages();

    // setters
    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setPages(int pages);

    ~Book();
};

#endif