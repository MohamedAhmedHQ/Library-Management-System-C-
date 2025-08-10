#pragma once
#include "Library.h"
#include <iostream>
#include"Book.h"
using namespace std;
class LibraryUI



{
public:
	static void DisplayBooks(Library library) {
		auto books = library.Getbooks();
		
		if (books.empty()) {
			cout << "No Books Available";
			return;
		}
		for (auto b : books) {

			cout << "Book Name: " << b.GetBookName() << endl;
			cout << "Author : " << b.GetAuthor() << endl;
			cout << " Release Date : " << b.GetRealeaseDate() << endl;
		}

	}

	static void DisplayBook(Book book) {
		cout << "Name: " << book.GetBookName()
			<< " | Author: " << book.GetAuthor()
			<< " | Release Date: " << book.GetRealeaseDate()
			<< "\n";
	}

};

