#pragma once
class Customer
{
public:
	Customer();
	~Customer();

private:
	int m_Money;//main함수에서 cin객체를 통해 인수를 입력받아서 초기화

public:
	bool Purchase(int m_Money, int m_Price);
};

