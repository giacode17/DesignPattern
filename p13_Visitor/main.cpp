#include <iostream>
#include <string>
#include "entry.h"
#include "file.h"
#include "directory.h"

using namespace std;

int main(){
    cout << "Making root entries..." << endl;

    Directory rootdir("root");
    Directory bindir("bin");
    Directory tmpdir("tmp");
    Directory usrdir("usr");

    rootdir.add(bindir);
    rootdir.add(tmpdir);
    rootdir.add(usrdir);

    bindir.add(File("vi", 10000));
    bindir.printList();
    bindir.add(File("latex", 456));
    bindir.printList();
    
    rootdir.printList();
    
    return 0;
}


