#include <iostream>
using namespace std;

class SoAo
{
protected:
	float iAo;
public:
	SoAo()
	{
		iAo = 0;
	}
	SoAo(float a)
	{
		iAo = a;
	}
	void Xuat() const
	{
		if (iAo > 0) cout << "+" << iAo << "i" << endl;
		else if (iAo < 0) cout << iAo << "i" << endl;
	}
	~SoAo()
	{
		iAo = 0;
	}
};