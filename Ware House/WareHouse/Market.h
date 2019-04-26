#pragma once
class Market
{
public:
	Market();
	~Market();

public:
	int Receive();//입고
	int Release();//출고

	std::map<int, int> m_Stock;//현 재고량
};

