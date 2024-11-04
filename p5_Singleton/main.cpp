
#include <iostream>
#include <string>

using namespace std;

class Singleton{
private:
    static Singleton* sg;
    Singleton(){}
    
public:
    
    static Singleton* getInstance(){
        if(sg == NULL){
            sg = new Singleton();
            return sg;
        }
        return sg;
    }
    
    Singleton(const Singleton& obj)= delete;
    
};
Singleton* Singleton ::sg = NULL;

int main(){
    cout << "start!!" <<endl;
    
    Singleton* obj1 = Singleton :: getInstance();
    Singleton* obj2 = Singleton :: getInstance();
    
    if(obj1 == obj2){
        cout << "Same object" << endl;
    }
    else {cout << "Different object" << endl;}

    cout << "Over!! " <<endl;
    
    
    return 0;
}



