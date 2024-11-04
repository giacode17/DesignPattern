#include "directory.h"

using namespace std;

Directory :: Directory(string name) {
    _name = name;    
}

Directory :: ~Directory(){}

int Directory :: getSize(){
    int size = 0;
    
    /* for (int i = 0; i < _items.size(); i++){
        int sz = _items[i].getSize();
        size += sz;
    } */

    vector<Entry>::iterator it;
    //it = end(_items);
    
    for(it = begin(_items); it != end(_items);it++){
        int sz = it->getSize(); 
        size += sz;
    }
    cout << "Total size of directory :   " <<size<< endl;
    return size; 
}

void Directory :: add(Entry entry){
   
    _items.push_back(entry);

    Entry last = _items.back();
    cout << _name << " add: " << last.getName() << " done" << endl;  
    
}

void Directory :: printList(){
    
    cout << "____start list__"<< endl;

    vector<Entry>::iterator it;
    //it = end(_items);
    cout << "This list : /";
    for(it = begin(_items); it != end(_items);it++){
        cout << it->getName()<< " / "; 
    }

    cout <<'(' <<this->getSize() <<')' << endl << "end list"<< endl;
        
    


}






