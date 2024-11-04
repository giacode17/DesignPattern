#include "BookShelf.hpp"
#include "Book.hpp"
#include "BookShelfIterator.hpp"

BookShelf::BookShelf(){}

Book* BookShelf :: getBookAt(int index){
    return &_books[index];
}

void BookShelf :: appendBook(Book book){ 
    _books.push_back(book);
}

int BookShelf :: getLength(){
    return _books.size();
}

Iterator* BookShelf :: iterator(){
    return new BookShelfIterator(this);
    //return &BookShelfIterator;
}









