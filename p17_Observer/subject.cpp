
#include "subject.h"
#include "observer.h"
#include <iostream>
#include <algorithm>
//subject 

void NumberGenerator::addObserver(Observer* ob) {
    observers.push_back(ob);
}
void NumberGenerator::deleteObserver(Observer* ob) {
    auto iterator = find(observers.begin(), observers.end(), ob);

    if (iterator != observers.end()) { // observer found
        observers.erase(iterator); // remove the observer
    }
}
void NumberGenerator::notifyObserver() {
    for (Observer *observer : observers) { 
        observer->update();//update status
    }
}

