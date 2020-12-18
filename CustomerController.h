#pragma once
#include <string>
#include "Customer.h"
#include "CustomerService.h"
class CustomerController
{
private:
	bool access;
	CustomerService customerService;
public:
	std::string Initialize();
	std::string	customerList();
	std::string getCustomer(long);
	std::string showCustomer(long);
	std::string editCustomer(Customer);
	std::string checkAuthethication();
	std::string showLibrary(long);
	std::string addFriends(Customer);
	std::string changeCustomerConfig(Customer);
	std::string giveBook();
	std::string buyBook();
};

