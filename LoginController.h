#pragma once
#include <string>
#include "CustomerService.h"
#include "EntryDialog.h"

class LoginController
{
private:
	bool access;
	CustomerService customerService;
public:
	std::string loginCustomer(std::string, std::string);
};

