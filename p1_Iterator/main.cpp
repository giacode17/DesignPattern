#include <iostream>
#include <string>
#include <vector>
#include "Aggregate.hpp"
#include "Iterator.hpp"
#include "BookShelf.hpp"
#include "BookShelfIterator.hpp"
#include "Book.hpp"
#include "Object.hpp"


using namespace std;

int main(){

    BookShelf bookShelf;

    bookShelf.appendBook(Book("AAA"));
    bookShelf.appendBook(Book("BBB"));
    bookShelf.appendBook(Book("CCC"));
    bookShelf.appendBook(Book("DDD"));

    string title;
    Iterator* it = bookShelf.iterator();
    Book* bk;
    
    while(it->hasNext()){
        bk = (Book*)it->next();
        title = bk->getName();
        cout << title << endl;
    }
 
    return 0;
}
