#include "pch.h"
#include "Customer.h"
#include "Menu.h"

bool Customer::Purchase(int m_Money, int m_Price)
{
	if (m_Money >= m_Price)
	{
		Menu::Order(Menu::m_Name);
	}
	//m_Price�� m_Money�� ��, m_Money�� m_Price���� ������ false ����
}

Customer::Customer()
{
}


Customer::~Customer()
{
}
