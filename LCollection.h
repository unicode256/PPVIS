#pragma once
#include <list>
#include <string>
#include "Book.h"
#include "Customer.h"
class LCollection
{
private:
	long id;
	std::string lCollectionName;
	std::string	password;
	std::list<Book> bookList;
	std::list<Customer> customerWithAccess;
};

