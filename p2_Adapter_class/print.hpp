#ifndef PRINT_HPP
#define PRINT_HPP

class Print{
public:
    ~Print(){}
    virtual void printWeek()= 0;
    virtual void printStrong() = 0;
};
#endif