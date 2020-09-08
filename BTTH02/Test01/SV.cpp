#pragma once
#include <iostream>
#include <string>
using namespace std;

class SV
{
private:
	int STT;
	string Code;
	string Name;
	string Date;
	int Toan, Van, Anh;
	int Total;
public:
	void setInfo(int stt, string code, string name, string date)
	{
		STT = stt;
		Code = code;
		Name = name;
		Date = date;
	}
	void setMark(int toan, int anh, int van)
	{
		Toan = toan;
		Anh = anh;
		Van = van;
		Total = Toan + Anh + Van;
	}
	int getTotal()
	{
		return(Total);
	}
	void printf()
	{
		cout << "-" << endl;
		cout << "STT " << this->STT << ":" << endl;
		cout << "Thong tin hoc sinh:" << endl;
		cout << "Ma: " << this->Code << endl;
		cout << "Ho ten: " << this->Name << endl;
		cout << "Ngay sinh: " << this->Date << endl;
		cout << "Diem toan: " << this->Toan << endl;
		cout << "Diem van: " << this->Van << endl;
		cout << "Diem anh: " << this->Anh << endl;
	}
};

int main()
{
	int n;
	bool ok = false;
	SV sv[100];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		string ma, ten, ngay;
		cin.ignore();
		getline(cin, ma);
		getline(cin, ten);
		getline(cin, ngay);
		sv[i].setInfo(i, ma, ten, ngay);
		int toan = -1, anh = -1, van = -1;
		while ((toan > 10) || (toan < 0) || (anh > 10) || (anh < 0) || (van > 10) || (van < 0))
		{
			cin >> toan;
			cin >> van;
			cin >> anh;
		}
		sv[i].setMark(toan, anh, van);
		if (sv[i].getTotal() >= 15) ok = true;
	}
	if (!ok) cout << "Khong co thi sinh co tong diem lon hon 15" << endl;
	else
		for (int i = 1; i <= n; i++)
		{
			if (sv[i].getTotal() >= 15) sv[i].printf();
		}
	system("pause");
	return 0;
}