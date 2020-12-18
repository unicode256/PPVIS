#pragma once
#include "Customer.h"
class CustomerInteractionDAO
{
public:
	virtual Customer getById(long);
	virtual void update(Customer);
};

