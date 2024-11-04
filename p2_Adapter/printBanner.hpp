#ifndef PRINTBANNER_HPP
#define PRINTBANNER_HPP
#include "print.hpp"
#include "banner.hpp"
#include <iostream>
#include <string>
using namespace std;

class PrintBanner : public Banner
{
private:
    Banner _banner;
public:
    PrintBanner(string str): Banner(str){}
    ~PrintBanner() {}
    void printWeek(); //does not override any base class??
    void printStrong(); //override;
};

#endif