#include "BookShelf.hpp"
#include "BookShelfIterator.hpp"

BookShelf::BookShelf(){}
BookShelf::~BookShelf(){}
Book* BookShelf :: getBookAt(int index){
    return &_books[index];
}

void BookShelf :: appendBook(Book book){ 
    _books.push_back(book);
}

int BookShelf :: getLength(){
    return _books.size();
}

Iterator<Book>* BookShelf :: iterator(){ //<BOOK>의 유무
    return new BookShelfIterator(this);
}









