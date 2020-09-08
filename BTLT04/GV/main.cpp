#include "GV.h"
#include <iostream>
using namespace std;

int main()
{
	GV a;
	string Name;
	int MS, NS, Old, CT;

	cout << "Nhap ten GV: ";
	getline(cin,Name);
	a.setHoTen(Name);
	cout << "Nhap MSGV: ";
	cin >> MS;
	a.setMSGV(MS);
	cout << "Nhap nam sinh GV: ";
	cin >> NS;
	a.setNamSinh(NS);
	cout << "Nhap tuoi GV: ";
	cin >> Old;
	a.setTuoi(Old);
	cout << "Nhap so nam cong tac GV: ";
	cin >> CT;
	a.setNamCT(CT);

	cout << "Ten GV :" << a.getHoTen() << endl;
	cout << "MSGV :" << a.getMSGV() << endl;
	cout << "Nam sinh GV :" << a.getNamSinh() << endl;
	cout << "Tuoi GV :" << a.getTuoi() << endl;
	cout << "So nam cong tac GV :" << a.getNamCT() << endl;
	cout << "Luong thang: " << a.getLuong() << endl;

	system("pause");
	return 0;
}