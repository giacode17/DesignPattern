#ifndef FILE_H
#define FILE_H

//#include <iostream>
#include <string>
#include "entry.h"
using namespace std;

class File : public Entry 
{
    string _name;
    int _size;

    public:
        File(string name, int size);
        ~File();
        string getName();       
        int getSize();   
        void printList();
};

#endif




