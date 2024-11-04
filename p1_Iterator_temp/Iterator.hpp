#ifndef ITERATOR_H
#define ITERATOR_H

//using namespace std; 

template <typename T>
class Iterator                                                                                                                                                                                                                                           
{
public:   
    virtual bool hasNext() = 0;
    virtual T* next() = 0;
};

#endif
