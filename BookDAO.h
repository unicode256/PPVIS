#pragma once
#include "Book.h"
class BookDAO
{
public:
	virtual Book getBook(long);
	virtual void update(long);
	virtual void saveNotes(Book);
};

