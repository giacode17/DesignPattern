#include "BookShelfIterator.hpp"
#include "BookShelf.hpp"
#include "Iterator.hpp"

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
    
Object* BookShelfIterator :: next(){
    Object* book = _bookShelf->getBookAt(_index);
    _index++;
    return book;
}









