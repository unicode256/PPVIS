#pragma once
#include <string>
#include <list>
class Customer
{
private:
	long id;
	std::string CustomerName;
	std::string	password;
	int age;
	std::string sex;
	long libraryId;
	std::list<Customer> friendList;
};