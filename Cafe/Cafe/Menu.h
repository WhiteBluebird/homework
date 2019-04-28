#pragma once
class Menu
{
public:
	Menu();
	~Menu();

public:
	char m_Name;
	int m_Price;

	void Order(char m_Name);
};

