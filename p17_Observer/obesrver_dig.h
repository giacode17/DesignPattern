#ifndef OBSERVER_CON_H
#define OBSERVER_CON_H
#include "observer.h"
#include <iostream>

//observer_concrete
class DigitObserver : public Observer{
public:
    virtual void update();

};


#endif