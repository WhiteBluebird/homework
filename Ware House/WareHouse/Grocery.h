#pragma once
#include "Product.h"

struct Grocery : public Product 
{
public:
	Grocery();
	~Grocery();
	time_t ExpirationDate;
};

