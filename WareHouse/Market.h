#pragma once
class Market
{
public:
	int Receive(int CallOfStock);
	Market();
	~Market();

public:
	/*int Receive(int CallOfStock);//�԰�
	int Release(int CallOfStock);//���*/

	static std::map<int, int> m_Stock;//�� ���
};

