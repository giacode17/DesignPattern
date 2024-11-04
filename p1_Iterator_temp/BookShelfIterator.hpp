#ifndef BOOKSHELFITERATOR_H
#define BOOKSHELFITERATOR_H

#include "Aggregate.hpp"
#include "BookShelf.hpp"

class BookShelfIterator : public Iterator<Book> //<Book>누락
{
private:
    BookShelf* _bookShelf;
    int _index;

public:
    BookShelfIterator();
    BookShelfIterator (BookShelf* bookShelf);
    ~BookShelfIterator();
    bool hasNext();
    Book* next();
};

#endif
