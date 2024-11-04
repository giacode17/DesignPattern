#ifndef BOOKSHELF_H
#define BOOKSHELF_H
#include <iostream>
#include <string>
#include <vector>
#include "Aggregate.hpp"
#include "Book.hpp"

using namespace std;

class BookShelf : public Aggregate
{
private:
    vector<Book> _books;
public:
    BookShelf();
    Book* getBookAt(int index);
    void appendBook(Book book);
    int getLength();
    Iterator* iterator();
};

#endif
