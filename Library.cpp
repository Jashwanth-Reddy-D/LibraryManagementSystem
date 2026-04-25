#include <iostream>
#include "Library.h"

using namespace std;

void Library::addBook() {
    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Author: ";
    getline(cin, author);

    books.push_back(Book(id, title, author));
    cout << "Book Added!\n";
}

void Library::addMember() {
    int id;
    string name;

    cout << "Enter Member ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    members.push_back(Member(id, name));
    cout << "Member Added!\n";
}

void Library::issueBook() {
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    for (auto &b : books) {
        if (b.id == id) {
            if (!b.isIssued) {
                b.isIssued = true;
                cout << "Book Issued!\n";
            } else {
                cout << "Already Issued!\n";
            }
            return;
        }
    }
    cout << "Book Not Found!\n";
}

void Library::returnBook() {
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    for (auto &b : books) {
        if (b.id == id) {
            if (b.isIssued) {
                b.isIssued = false;
                cout << "Book Returned!\n";
            } else {
                cout << "Not Issued!\n";
            }
            return;
        }
    }
    cout << "Book Not Found!\n";
}

void Library::searchByTitle() {
    string title;
    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, title);

    for (auto &b : books) {
        if (b.title == title) {
            cout << "Found: " << b.title << " by " << b.author << endl;
            return;
        }
    }
    cout << "Not Found!\n";
}

void Library::searchByAuthor() {
    string author;
    cin.ignore();
    cout << "Enter Author: ";
    getline(cin, author);

    for (auto &b : books) {
        if (b.author == author) {
            cout << "Found: " << b.title << endl;
            return;
        }
    }
    cout << "Not Found!\n";
}

void Library::displayBooks() {
    for (auto &b : books) {
        cout << b.id << " | " << b.title << " | " << b.author
             << " | " << (b.isIssued ? "Issued" : "Available") << endl;
    }
}

vector<Book>& Library::getBooks() {
    return books;
}

vector<Member>& Library::getMembers() {
    return members;
}