#pragma once

struct Product
{

	virtual ~Product() {}

	enum class Spacies {
		Snack, Candy,
	};

protected:
	std::string m_Name;
	int m_Id;//�̸�
	Spacies m_Spacies;//��ǰ ����. ���ڷ� �����...
	int m_Price;//����


};