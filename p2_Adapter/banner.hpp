#ifdef BANNER.HPP
#define BANNER.HPP

#include <string>
using namespace std

class Banner
{
private:
    string _string;
    
public:
    Banner (string str){
        _string = str;
    }
    ~Banner(){}
    void showWithParen();
    void showWithAster();
}; 


#endif