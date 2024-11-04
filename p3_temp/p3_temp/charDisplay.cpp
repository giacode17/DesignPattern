//
//  charDisplay.cpp
//  p3_temp
//
//  Created by JIHYUN SUN on 7/14/23.
//

#include "charDisplay.hpp"
#include <iostream>
#include <string>
using namespace std;

CharDisplay :: CharDisplay(char ch){
    _ch = ch;
}
void CharDisplay :: open(){
    cout<< "<< " ;
}
void CharDisplay :: print(){
    cout<< _ch << ' ';
}
void CharDisplay :: close(){
    cout<< " >>" <<endl;
}
