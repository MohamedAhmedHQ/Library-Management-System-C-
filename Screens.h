#pragma once
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

class Screens {
public:
    void showMainMenu() {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. Display All Books\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
    }

    Book GetBookFromUser() {
        string name, author, date;

        cin.ignore();
        cout << "Enter book name: ";
        getline(cin, name);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter release date: ";
        getline(cin, date);

        return Book(name, author, date);
    }

    string GetBookNameToRemove() {
        string name;
        cin.ignore();
        cout << "Enter book name to remove: ";
        getline(cin, name);
        return name;
    }
};
