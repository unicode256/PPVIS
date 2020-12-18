#pragma once
#include "Book.h"
class BookService
{
public:
	virtual Book getBook(long);
	virtual void saveBook(Book);
	virtual void saveNotes(Book);
};

