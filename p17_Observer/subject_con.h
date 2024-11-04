#ifndef SUBJECT_CON_H
#define SUBJECT_CON_H

#include "subject.h"
#include "observer.h" 
#include <vector>

using namespace std;

//concrete subject 
 
class RandomNumberGenerator : public NumberGenerator {
private: 
    //int _random();
    int _number;
public:
    int getNumber();            //수를 취득한다
    void execute();            //수를 생성한다set the updated status
    
    /*
    void addObserver(Observer* ob) override;
    void deleteObserver(Observer* ob) override;
    void notifyObserver() override;
    */

};

#endif