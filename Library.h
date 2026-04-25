#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Member.h"   // ✅ THIS LINE IS CRITICAL

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<Member> members;

public:
    void addBook();
    void addMember();
    void issueBook();
    void returnBook();
    void searchByTitle();
    void searchByAuthor();
    void displayBooks();

    vector<Book>& getBooks();
    vector<Member>& getMembers();
};

#endif