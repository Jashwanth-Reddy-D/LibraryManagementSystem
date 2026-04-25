#include <iostream>
#include "Library.h"
#include "FileHandler.h"

using namespace std;

int main() {
    Library lib;
    FileHandler::loadBooks(lib);

    int choice;

    do {
        cout << "\n===== Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Add Member\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Title\n";
        cout << "6. Search Author\n";
        cout << "7. Display Books\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: lib.addBook(); break;
            case 2: lib.addMember(); break;
            case 3: lib.issueBook(); break;
            case 4: lib.returnBook(); break;
            case 5: lib.searchByTitle(); break;
            case 6: lib.searchByAuthor(); break;
            case 7: lib.displayBooks(); break;
        }

    } while (choice != 0);

    FileHandler::saveBooks(lib);
    return 0;
}