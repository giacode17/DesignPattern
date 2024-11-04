#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <vector>
#include "Aggregate.hpp"
#include "Iterator.hpp"
#include "Book.hpp"

using namespace std;

class BookShelf : public Aggregate<Book> {
private:
    vector<Book> _books;
public:
    BookShelf();
    ~BookShelf();
    Book* getBookAt(int index);
    void appendBook(Book book);
    int getLength();
    
    Iterator<Book>* iterator();    
};

#endif
