#include "Aggregate.hpp"
#include "BookShelfIterator.hpp"

BookShelfIterator :: BookShelfIterator (BookShelf* bookShelf){
    _bookShelf = bookShelf;
    _index = 0;
}

bool BookShelfIterator :: hasNext(){
    if (_index < _bookShelf->getLength() ){
        return true;
    }
    return false;
}
    
Book* BookShelfIterator :: next(){
    Book* book = _bookShelf->getBookAt(_index);
    _index++;
    return book;
}











