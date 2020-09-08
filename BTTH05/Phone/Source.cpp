#include <iostream>
#include <string>
using namespace std;

class CPU
{
protected:
	int KindCPU;
	int PriceCPU;
	int Core;
	float Hz;
	string BrandCPU;
	string CodeCPU;
public:
	CPU()
	{}
	void Nhap()
	{
		cin >> KindCPU;
		switch (KindCPU)
		{
		case 1:
		{
			PriceCPU = 200;
			Core = 2;
			Hz = 1.8;
			BrandCPU = "Black";
			break;
		}
		case 2:
		{
			PriceCPU = 400;
			Core = 4;
			Hz = 2.46;
			BrandCPU = "Black";
			break;
		}
		case 3:
		{
			PriceCPU = 600;
			Core = 4;
			Hz = 2.6;
			BrandCPU = "White";
			break;
		}
		}
		cin.ignore();
		getline(cin, CodeCPU);
	}
	~CPU()
	{}
};
class LCD
{
protected:
	string CodeLCD;
	string Producer;
	int PriceLCD;
	int Res;
	bool Glare;
public:
	LCD()
	{}
	void Nhap()
	{
		getline(cin, CodeLCD);
		getline(cin, Producer);
		cin >> Res;
		if (Res == 2)
		{
			cin >> Glare;
			if (Glare == 1) PriceLCD = 500;
			else PriceLCD = 300;
		}
		else PriceLCD = 200;
	}
	~LCD()
	{}
};
class Cover
{
protected:
	int KindCover;
	int PriceCover;
	string BrandCover;
	string CodeCover;
	int Color;
public:
	Cover()
	{}
	void Nhap()
	{
		cin >> KindCover;
		switch (KindCover)
		{
		case 1:
		{
			PriceCover = 400;
			BrandCover = "Black";
			break;
		}
		case 2:
		{
			PriceCover = 2;
			BrandCover = "White";
			break;
		}
		}
		cin.ignore();
		getline(cin, CodeCover);
		cin >> Color;
	}
	~Cover()
	{}
};
class Phone : public CPU, LCD, Cover
{
private:
	int KindPhone;
	string CodePhone;
	int PricePhone;
public:
	Phone()
	{}
	void Nhap()
	{
		cin >> KindPhone;
		cin.ignore();
		getline(cin, CodePhone);
		CPU::Nhap();
		LCD::Nhap();
		Cover::Nhap();
		PricePhone = PriceCPU + PriceLCD + PriceCover;
		switch (KindPhone)
		{
		case 1:
		{
			PricePhone *= 1.3;
			break;
		}
		case 2:
		{
			PricePhone *= 1.5;
			break;
		}
		case 3:
		{
			PricePhone *= 1.8;
			break;
		}
		}
	}
	void Xuat()
	{
		cout << "Smartphone: " << CodePhone << " ";
		switch (KindPhone)
		{
		case 1:
		{
			cout << "Venus ";
			break;
		}
		case 2:
		{
			cout << "Mars ";
			break;
		}
		case 3:
		{
			cout << "Jupiter ";
			break;
		}
		}
		cout << PricePhone << endl;
		cout << "CPU: " << CodeCPU << " ";
		switch (KindCPU)
		{
			case 1:
			{
				cout << "Alpha ";
				break;
			}
			case 2:
			{
				cout << "Beta ";
				break;
			}
			case 3:
			{
				cout << "Gamma ";
				break;
			}
		}
		cout << BrandCPU << " " << Core << " " << Hz << " " << PriceCPU << endl;
		cout << "Man hinh: " << CodeLCD << " " << Producer << " ";
		if (Res == 2)
		{
			cout << "FullHD " << PriceLCD << " ";
			if (Glare) cout << "Yes\n";
			else cout << "No\n";
		}
		else cout << "HD " << PriceLCD << endl;
		cout << "Vo smartphone: " << CodeCover << " ";
		if (KindCover == 1)
		{
			cout << "Nhom ";
		}
		else cout << "Nhua ";
		cout << BrandCover << " ";
		switch (Color)
			{
			case 1:
			{
				cout << "Do ";
				break;
			}
			case 2:
			{
				cout << "Den ";
				break;
			}
			case 3:
			{
				cout << "Xanh ";
				break;
			}
			} 
		cout << PriceCover << endl;
		}
	~Phone()
	{}
};

int main()
{
	int n;
	cin >> n;
	Phone a[100];
	for (int i = 1; i <= n; i++)
	{
		a[i].Nhap();
		a[i].Xuat();
	}
	system("pause");
	return 0;
}