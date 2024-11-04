#ifndef BOOKSHELFITERATOR_H
#define BOOKSHELFITERATOR_H
#include <iostream>
#include <string>
#include <vector>
//#include "Iterator.hpp"

using namespace std;

class BookShelfIterator : public Iterator
{
private:
    BookShelf* _bookShelf;
    int _index;

public:
    BookShelfIterator (BookShelf* bookShelf);
    bool hasNext();
    Object* next();
};

#endif
