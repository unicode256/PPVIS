#pragma once
#include "LibraryService.h"
#include <string>
class LibraryController
{
private:
	bool access;
	LibraryService libraryService;
public:
	std::string showLibrary();
	std::string showAllCollection(long);
	std::string editLibrary();
	std::string changeLibraryConfig();
};

