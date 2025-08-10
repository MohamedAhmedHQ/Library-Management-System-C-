#pragma once
#include <string>
using namespace std;

class Book
{
private:
	string BookName;
	string Author;
	string RealeaseDate;

public:

	Book(string BookName,string Author,string RealeaseDate)
	{
		this->BookName = BookName;
		this->Author = Author;
		this->RealeaseDate = RealeaseDate;
	}

	void SetBookName(string BookName) {
		this->BookName = BookName;
	}
	void SetAuthor(string Author) {
		this->Author = Author;
	}
	void SetRealeaseDate(string RealeaseDate) {
		this->RealeaseDate = RealeaseDate;
	}
	string GetBookName() {
		return BookName;
	}
	string GetAuthor() {
		return this->Author;
	}
	string GetRealeaseDate() {
		return this->RealeaseDate;
	}

};

