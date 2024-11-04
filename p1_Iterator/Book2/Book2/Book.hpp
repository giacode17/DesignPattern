#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include <vector>
#include "Object.hpp"

using namespace std;

/* class Object
{
public:
    virtual string getID();
}; */

class Book : public Object
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
