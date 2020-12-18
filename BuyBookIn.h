#pragma once
#include "Book.h"
class BuyBookIn
{
public:
	virtual bool findBook(std::string);
	virtual Book BuyBook();
	virtual bool addBookInLibrary(Book);
};

