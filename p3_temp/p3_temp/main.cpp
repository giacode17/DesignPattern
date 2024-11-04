//
//  main.cpp
//  p3_temp
//
//  Created by JIHYUN SUN on 7/14/23.
//

#include <iostream>
#include <string>
#include <vector>


#include "abstracDisplay.hpp"
#include "charDisplay.hpp"
#include "stringDisplay.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
   
    CharDisplay c1 = CharDisplay('H');
    StringDisplay c2 = StringDisplay("Hello");
    
    AbstracDisplay& a1 = c1;
    AbstracDisplay& a2 = c2;
    
    a1.display();
    a2.display();

        
    return 0;
}
