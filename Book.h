#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;

    Book(int i = 0, string t = "", string a = "", bool issued = false) {
        id = i;
        title = t;
        author = a;
        isIssued = issued;
    }
};

#endif