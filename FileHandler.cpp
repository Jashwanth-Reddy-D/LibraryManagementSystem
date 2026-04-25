#include <fstream>
#include "FileHandler.h"

using namespace std;

void FileHandler::saveBooks(Library &lib) {
    ofstream file("data_books.txt");

    for (auto &b : lib.getBooks()) {
        file << b.id << "," << b.title << "," << b.author << "," << b.isIssued << endl;
    }

    file.close();
}

void FileHandler::loadBooks(Library &lib) {
    ifstream file("data_books.txt");

    int id;
    string title, author;
    bool issued;

    while (file >> id) {
        file.ignore();
        getline(file, title, ',');
        getline(file, author, ',');
        file >> issued;

        lib.getBooks().push_back(Book(id, title, author, issued));
    }

    file.close();
}