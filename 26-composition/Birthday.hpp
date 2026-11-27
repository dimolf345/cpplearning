#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
private:
    int month, day, year;

public:
    Birthday(int d, int m, int y);
    void printDate();
    ~Birthday();
};

#endif