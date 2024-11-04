#include "head.hpp"

string Object :: getID(){
    return "Object";
}

Book :: Book(){}
Book :: Book(string name) {
    _name = name;
}
Book :: ~Book(){}
string Book :: getName(){
    return _name;
}


BookShelf::BookShelf(){}

Book* BookShelf :: getBookAt(int index){
    return &_books[index];
}

void BookShelf :: appendBook(Book book){ //선택해서 주고 last앞으로 보내기
    _books.push_back(book);
}

int BookShelf :: getLength(){
    return _books.size();
}

Iterator* BookShelf :: iterator(){
    return new BookShelfIterator(this);
    //return &BookShelfIterator;
}


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









