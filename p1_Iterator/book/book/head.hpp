#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Object
{
public:
    virtual string getID();
};

class Iterator
{
public:
    virtual bool hasNext() = 0;
    virtual Object* next() = 0;
};

class Aggregate
{
public:
    virtual Iterator* iterator() = 0;
};

class Book : public Object
{
private:
    string _name;
public:
    Book();
    Book(string name);
    ~Book();
    string getName();
};


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

class BookShelfIterator : public Iterator
{
private:
    BookShelf* _bookShelf;
    int _index;

public:
    BookShelfIterator (BookShelf* bookShelf);
    bool hasNext();
    Object* next();
};

#endif
