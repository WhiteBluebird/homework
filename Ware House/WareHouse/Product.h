#pragma once

struct Product
{

	virtual ~Product() {}

	enum class Spacies {
		Snack, Candy,
	};

protected:
	std::string m_Name;
	int m_Id;//이름
	Spacies m_Spacies;//상품 종류. 과자류 라던가...
	int m_Price;//가격


};