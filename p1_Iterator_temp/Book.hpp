#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book 
{
private:
    string _name;
public:
    Book();
    Book(string name);
    ~Book();
    string getName();
};

#endif