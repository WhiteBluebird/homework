#pragma once
class Market
{
public:
	Market();
	~Market();

public:
	int Receive();//�԰�
	int Release();//���

	std::map<int, int> m_Stock;//�� ���
};

