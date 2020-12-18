#pragma once
#include <string>
#include "Customer.h"
#include "Date"
#include "Book.h"
class CustomerFriendsService
{
public:
	virtual Customer getById(long);
	virtual void update(Customer);
	virtual void giveBookToFriend(Customer);
	virtual void giveBookToFriend(Customer, Date);
	virtual Book takeBookFromFriend(Customer);
	virtual Book takeBookFromFriend(Customer, Date);
	virtual void checkTime(std::list<Customer>);
};



