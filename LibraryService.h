#pragma once
#include "Library.h"
class LibraryService
{
public:
	virtual void update(Library);
	virtual std::list<LCollection> getAllCollection();
	virtual void Delete(long);
	virtual Library getLibrary();
};

