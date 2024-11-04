#include <iostream>
#include <string>
#include <vector>


/* 
Adapter
1. Target(대상)_ print
2. Client(의뢰자)_main
3. Adaptee _Banner
4. Adapter _PrintBanner
1)class에 의한 (상속을 사용) Adapter
2)instance에 의한 (위임을 사용) Adapter
 */
#include "printBanner.hpp"
#include "print.hpp"
#include "banner.hpp"

using namespace std;

int main(){
    
    PrintBanner pt("Hello");
    //Print p = (Print)pt;
    pt.printStrong();
    pt.printWeek();
        
    return 0;
}