#ifndef BANNER_HPP
#define BANNER_HPP
#include <iostream>
#include <string>
using namespace std;

class Banner
{
private:
    string _string;
public:
    Banner (string str){
        _string = str;
    }
    ~Banner(){}
    void showWithParen();
    void showWithAster();
};

#endif 