#pragma once
#include "CustomerFriendsService.h"
#include "CustomerInteractionDAO.h"
class CustomerFriendsServiceImpl : public CustomerFriendsService
{
private:
	CustomerInteractionDAO customerInteractionDAO;
};

