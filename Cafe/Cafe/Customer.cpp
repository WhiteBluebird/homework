#include "pch.h"
#include "Customer.h"
#include "Menu.h"

bool Customer::Purchase(int m_Money, int m_Price)
{
	if (m_Money >= m_Price)
	{
		Menu::Order(Menu::m_Name);
	}
	//m_Price와 m_Money를 비교, m_Money가 m_Price보다 작으면 false 리턴
}

Customer::Customer()
{
}


Customer::~Customer()
{
}
