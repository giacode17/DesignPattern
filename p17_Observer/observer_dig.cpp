
#include "observer_dig.h"
//#include <iostream>
using namespace std;

void DigitObserver:: update(NumberGenerator* generator){
    cout << "DigitObserver: " << 
            generator->getnumber() << " get number!!  " << endl;
    
    /* try{
        Thread.sleep(100);
    }catch(const InterruptedException& e){} */

}

