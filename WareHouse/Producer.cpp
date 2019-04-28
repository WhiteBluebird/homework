#include "pch.h"
#include "Producer.h"

Producer::Producer()
{
}


Producer::~Producer()
{
}

int Producer::Receive(int CallOfReceive)
{
	Market::m_Stock = Market::m_Stock + CallOfReceive;
}
