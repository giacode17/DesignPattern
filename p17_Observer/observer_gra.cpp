
#include "observer_gra.h"


void GraphObserver :: update(NumberGenerator* generator){

    cout << "GraphObserver: ";
    int ct = generator->getnumber() 
    for (int i = 0; i < ct; i++){
        cout <<'*';
    }
    cout << endl;
    
    /* try{
        Thread.sleep(100);
    }catch(const InterruptedException& e){} */

}


