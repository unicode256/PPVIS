#pragma once
#include "CustomerService.h"
#include "CustomerDAO.h"
class CustomerServiceImpl : public CustomerService
{
private:
	CustomerDAO customerDAO;
};

