#pragma once
#include "Person.h"

class Management : public Person
{
private:
	string Name;
	int Old;
	string CMND;
public:
	Management()
	{
		Name = "";
		Old = 0;
		CMND = "";
	}
	void Nhap()
	{
		cout << "Ho ten: ";
		cin.ignore();
		getline(cin, Name);
		cout << "Tuoi: ";
		cin >> Old;
		cout << "CMND: ";
		cin.ignore();
		getline(cin, CMND);
		cout << "Chieu cao(cm): ";
		cin >> Tall;
		cout << "Hoc tai truong: ";
		cin >> School;
		cout << "So luot tham gia tro choi: ";
		cin >> Times;
		if ((Old <= 10) && (Tall <= 130)) Discount += 50;
		if (School == "A") Discount += 20;
		Fee = 100 * Times / 100 * (100 - Discount);
	}
	void Xuat()
	{
		cout << "Ho ten: " << Name << endl;
		cout << "Tuoi: " << Old << endl;
		cout << "CMND: " << CMND << endl;
	}
	float getTall()
	{
		return Tall;
	}
	float getFee()
	{
		return Fee;
	}
	~Management()
	{}
};