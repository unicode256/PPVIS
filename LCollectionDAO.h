#pragma once
#include "LCollection.h"
class LCollectionDAO
{
public:
	virtual void create(std::string, std::string);
	virtual LCollection getById(long);
	virtual void update(LCollection);
	virtual std::list<LCollection> getAllBook();
	virtual void Delete(long);
	virtual std::list<Customer> getFriends();
	virtual void addCustomer();
	virtual std::list<Customer> getAllCustomer();
};

