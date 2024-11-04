
#include "subject_con.h"
#include <iostream>
#include <cstdlib>
//#include "observer.h"
//concrete subject 

int RandomNumberGenerator ::getNumber(){         //수를 취득한다
    return _number;
}
void RandomNumberGenerator::execute(){            // 수를 생성한다.set the updated status
    for (int i = 0; i < 5; i++){
        _number = rand()% 10; // 5번동안 0~10까지 random 
    } 
}
