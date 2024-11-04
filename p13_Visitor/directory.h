#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "entry.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Directory : public Entry {  
    private: 
        vector<Entry> _items; 
    public :
        Directory(string name);
        ~Directory();        
        int getSize();
        void add(Entry entry);
        void printList();
};
#endif
        