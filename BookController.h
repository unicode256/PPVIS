#pragma once
#include "BookService.h"
class BookController
{
private:
	bool access;
	BookService bookService;
public:
	std::string showBook(Book);
	std::string makeNotesInBook(Book);
	std::string readBook(Book);
};

