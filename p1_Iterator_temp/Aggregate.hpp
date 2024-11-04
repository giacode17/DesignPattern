#ifndef AGGREGATE_H
#define AGGREGATE_H
#include "Iterator.hpp"

//using namespace std; 

template <typename T>
class Aggregate 
{
public:    
    virtual Iterator<T>* iterator() = 0; //pure virtual로 만듦    
};

#endif
