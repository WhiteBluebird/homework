#pragma once
class Market
{
public:
	int Receive(int CallOfStock);
	Market();
	~Market();

public:
	int Receive(int CallOfStock);//�԰�
	int Release(int CallOfStock);//���

	std::map<int, int> m_Stock;//�� ���
};

