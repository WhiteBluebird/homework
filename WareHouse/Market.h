#pragma once
class Market
{
public:
	int Receive(int CallOfStock);
	Market();
	~Market();

public:
	int Receive(int CallOfStock);//입고
	int Release(int CallOfStock);//출고

	std::map<int, int> m_Stock;//현 재고량
};

