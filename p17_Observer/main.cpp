#include <iostream>
#include "observer_con.h"
#include "subject_con.h"

using namespace std;

int main(){
    NumberGenerator generator = new RandomNumberGenerator();
    Observer observer1 = new DigitObserver();
    Observer observer2 = new GraphObserver();
    generator.addObserver(observer1);
    generator.addObserver(observer2);
    generator.execute();

    

    return 0;
}