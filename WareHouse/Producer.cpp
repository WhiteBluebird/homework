#include "pch.h"
#include "Producer.h"
#include "Market.h"


Producer::Producer()
{
}


Producer::~Producer()
{
}

bool Producer::SellToMarket(int _id, int _howMany)
{
	if (_howMany <= 0) { return false; } // cannot sell 0 products
	Market::m_Stock[_id] += _howMany;
	return true;
}
