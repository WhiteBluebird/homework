#include "pch.h"
#include "Consumer.h"
#include "Market.h"

bool Consumer::Buy(int _id, int _howMany)
{
	if (_howMany <= 0) { return false; } // cannot buy 0 products
	auto it = Market::m_Stock.find(_id); // find with the id of the product
	bool isInStock = (it != Market::m_Stock.end()) && (it->second - _howMany >= 0);
	if (isInStock) { // if the consumer can buy,
		it->second -= _howMany; // change the stock.
		return true;
	}
	else return false;
}


Consumer::Consumer()
{
}


Consumer::~Consumer()
{
}
