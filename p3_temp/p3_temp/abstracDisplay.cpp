//
//  abstrac.cpp
//  p3_temp
//
//  Created by JIHYUN SUN on 7/14/23.
//


#include "abstracDisplay.hpp"

void AbstracDisplay :: display(){
    open();
    for (int i = 0; i < 5; i++){
        print();
    }
    close();
    
}
