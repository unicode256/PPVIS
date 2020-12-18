#pragma once
#include "LCollectionService.h"
#include "LCollectionDAO.h"
class LCollectionServiceImpl :
    public LCollectionService
{
private:
    LCollectionDAO lCollectionDAO;
};

