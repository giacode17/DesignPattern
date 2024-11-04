#ifndef ENTRY_H
#define ENTRY_H
//#include "directory.h"
#include <vector>
#include <string>
using namespace std;

class Entry {
    protected:
        string _name;
        int _size;
        
    public:
        string getName() { return _name; };
        virtual int getSize() {};       
        virtual void printList(string prefix) {};
};

#endif

