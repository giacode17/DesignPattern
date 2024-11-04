#ifndef VISITOR_H
#define VISITOR_H
#include <vector>
#include <string>
using namespace std;

class Visitor {
    
    public:
        void visit(File file);
        void visit(Directory dir);
};

#endif
