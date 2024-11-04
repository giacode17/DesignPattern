#include <iostream>
#include <string>
#include <vector>
#include "Aggregate.hpp"
#include "BookShelf.hpp"
#include "BookShelfIterator.hpp"
#include "Book.hpp"

using namespace std;

int main(){
    
    BookShelf bookShelf;
    bookShelf.appendBook(Book("AAA"));
    bookShelf.appendBook(Book("BBB"));
    bookShelf.appendBook(Book("CCC"));
    bookShelf.appendBook(Book("DDD"));

    string title;
    Iterator<Book>* it = bookShelf.iterator(); //<Book>누락
    
    Book* bk;
    
    while(it->hasNext()){
        bk = (Book*)it->next();
        title = bk->getName();
        cout << title << endl;
    }
 
    return 0;
}
