#ifndef AGGREGATE_H
#define AGGREGATE_H
#include <iostream>
#include <string>
#include <vector>
#include "Iterator.hpp"

using namespace std;

/* class Object
{
public:
    virtual string getID();
}; */

class Aggregate
{
public:
    virtual Iterator* iterator() = 0;
};


#endif
