//
//  charDisplay.h
//  p3_temp
//
//  Created by JIHYUN SUN on 7/14/23.
//

#ifndef CHAR_HPP
#define CHAR_HPP
#include "abstracDisplay.hpp"

class CharDisplay : public AbstracDisplay
{
private:
    char _ch;
public:
    CharDisplay(char ch);
    ~CharDisplay(){}
    virtual void open() override;
    virtual void print() override;
    virtual void close() override;
};

#endif /* charDisplay_h */
