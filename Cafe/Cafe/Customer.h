#pragma once
class Customer
{
public:
	Customer();
	~Customer();

private:
	int m_Money;//main�Լ����� cin��ü�� ���� �μ��� �Է¹޾Ƽ� �ʱ�ȭ

public:
	bool Purchase(int m_Money, int m_Price);
};

