#ifndef OBSERVER_CON_H
#define OBSERVER_CON_H
#include "observer.h"
//observer_concrete

class GraphObserver : public Observer{
public:
    virtual void update();

};

#endif