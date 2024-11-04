#include "file.h"
#include <iostream>
#include <string>
using namespace std;

File :: File(string name, int size){ 
        _name = name;
        _size = size;
}

File :: ~File(){}

/* int File ::  getSize(){
        return _size;
} */

void File :: printList() {
        
        string name = getName();
        int size = getSize();
        cout <<"FFFile"<<'/'<< name <<"( "<<size<<" )" <<endl;
}
