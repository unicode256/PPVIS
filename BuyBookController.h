#pragma once
#include "BuyBookIn.h"
#include "BookService.h"
class BuyBookController
{
private:
	bool access;
	BuyBookIn buyBookIn;
	BookService bookService;
public:
	std::string buyBook(BuyBookIn);
	std::string saveBook(Book);
};

