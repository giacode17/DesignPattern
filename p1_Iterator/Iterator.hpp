#ifndef ITERATOR_H
#define ITERATOR_H
#include <iostream>
#include <string>
#include <vector>
#include "Object.hpp"

using namespace std;

class Iterator
{
public:
    virtual bool hasNext() = 0;
    virtual Object* next() = 0;
};

#endif
