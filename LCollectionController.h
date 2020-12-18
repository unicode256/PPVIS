#pragma once
#include "LCollectionService.h"
class LCollectionController
{
private:
	bool access;
	LCollectionService lCollectionService;
public:
	std::string showAllBook();
	std::string showLCollection(long);
	std::string editCollection();
	std::string changeLCollectionConfig();
};

