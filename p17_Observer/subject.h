#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include <iostream>
#include <vector>

//interface for subject
class NumberGenerator
{
private:
    vector<Observer *> observers; 
public:
    
    void addObserver(Observer* ob);
    void deleteObserver(Observer* ob);
    void notifyObserver();
    virtual int getNumber()=0;
    virtual void execute()=0;
};


#endif