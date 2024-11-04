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
    File file1("vi", 10000);
    File file2("latex", 80000);

    bindir.add(file1);
    bindir.printList();
    bindir.add(file2);

    rootdir.printList();
    
    return 0;
}


