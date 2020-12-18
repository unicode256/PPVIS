#pragma once
#include <string>
#include "LCollection.h"	
class Library
{
private:
	long id;
	std::string libraryName;
	std::list<LCollection>	LCollectionList;
};

