#pragma once
#include "string"
#include "Date.h"
class Book
{
private:
	long id;
	std::string bookName;
	std::string bookAuthor;
	Date yearOfPublish;
	Date returnDate;
};

