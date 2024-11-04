//
//  stringDisplay.cpp
//  p3_temp
//
//  Created by JIHYUN SUN on 7/14/23.
//

#include "stringDisplay.hpp"
#include <iostream>
#include <string>
using namespace std;

StringDisplay :: StringDisplay(string str){
    _str = str;
}

void StringDisplay :: open(){
    cout<< "<< " ;
}
void StringDisplay :: print(){
    cout<< _str << ' ';
}
void StringDisplay :: close(){
    cout<< " >>" <<endl;
}
