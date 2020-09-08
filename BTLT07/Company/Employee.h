#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string HoTen;
	string NgaySinh;
	string GioiTinh;
	bool BQL;
	int SP, DM, Luong;
public:
	Employee()
	{
		HoTen = "";
		NgaySinh = "";
		GioiTinh = "";
		BQL = false;
		SP = 0;
		DM = 0;
		Luong = 0;
	}
	friend istream& operator >> (istream &is, Employee &p)
	{	
		is.ignore();
		cout << "Ho ten: ";
		getline(is, p.HoTen);
		cout << "Ngay sinh: ";
		getline(is, p.NgaySinh);
		cout << "Gioi tinh: ";
		getline(is, p.GioiTinh);
		int t;
		cout << "1 neu la BQL: ";
		cin >> t;
		if (t == 1) p.BQL = true;
		cout << "Luong co ban: ";
		is >> p.Luong;
		cout << "San pham dinh muc: ";
		is >> p.DM;
		cout << "San pham thuc te lam duoc: ";
		is >> p.SP;
		if (p.BQL) p.Luong += 500000;
		if (p.SP > p.DM) p.Luong = p.Luong + (p.SP - p.DM) * 30000;
		return is;
	}
	friend ostream& operator << (ostream &os, Employee p)
	{
		os << "Ho ten: " << p.HoTen << endl;
		os << "Ngay sinh: " << p.NgaySinh << endl;
		os << "Gioi tinh: " << p.GioiTinh << endl;
		os << "Luong: " << p.Luong << endl;
		return os;
	}
	int getLuong()
	{
		return Luong;
	}
	~Employee()
	{
	}
};

