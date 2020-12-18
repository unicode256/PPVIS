#pragma once
#include "BookService.h"
#include "BookDAO.h"
class BookServiceImpl :
    public BookService
{
private:
    BookDAO bookDAO;
};

