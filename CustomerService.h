#pragma once
#include <string>
#include "Customer.h"
class CustomerService
{
public:
	virtual void create(std::string, std::string);
	virtual Customer getById(long);
	virtual void update(Customer);
	virtual std::list<Customer> allCustomer();
	virtual void Delete(long);
	virtual std::list<Customer> getFriends();
	virtual void addFriend(Customer);
};

