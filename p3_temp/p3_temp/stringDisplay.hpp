//
//  stringDisplay.hpp
//  p3_temp
//
//  Created by JIHYUN SUN on 7/14/23.
//

#ifndef STRING_HPP
#define STRING_HPP
#include "abstracDisplay.hpp"
#include <string>

using namespace std;

class StringDisplay : public AbstracDisplay
{
private:
    string _str;
    //int width;
public:
    StringDisplay(string str);
    ~StringDisplay(){}
    void open();
    void print();
    void close();
    //void printLine();
};

#endif /* stringDisplay_hpp */
