#pragma once
#include<vector>
#include"Book.h"
#include<string>
using namespace std;
class Library
{
 private:
	 vector<Book> books;
public:

	void AddBook(const Book &book) {
		books.push_back(book);
	}

	bool DeletBook(string bookname) {
		for (auto it = books.begin(); it != books.end(); it++) {
			if (it->GetBookName() == bookname) {
				books.erase(it);
				return true;
			}
			
		}
		return false;
	}

	vector<Book> &Getbooks() {
		return books;
	}

	Book* SearchBook(string Bookname) {

		for (auto &book : books) {
			if (book.GetBookName() == Bookname) {
				return &book;
			}
			
		}
		return nullptr;
	}
};

