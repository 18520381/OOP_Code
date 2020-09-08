#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	float Tall;
	float Discount;
	string School;
	int Times;
	float Fee;
public:
	Person()
	{
		Tall = 0;
		Discount = 0;
		School = "";
		Times = 0;
		Fee = 0;
	}
	~Person()
	{}
};
