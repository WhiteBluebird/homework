#include "pch.h"
#include "Consumer.h"
#include "Market.h"

int Release(int CallOfRelease)
{
	Market::m_Stock = Market::m_Stock + CallOfRelease;
}

Consumer::Consumer()
{
}


Consumer::~Consumer()
{
}
