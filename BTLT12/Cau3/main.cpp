#include "Character.h"
#include "Player.h"
#include "Casual.h"
#include "Boss.h"

void Import(Character *List[100], int i)
{
	int opt, lv;
	cout << "Nguoi hay quai(0/1): ";
	cin >> opt;
	cout << "Level: ";
	cin >> lv;
	if (opt == 0)
	{
		cout << "Clan: ";
		int clan;
		cin >> clan;
		List[i] = new Player(lv, clan);
	}
	else
	{
		int opt2, elm;
		cout << "Quai thuong hay boss (0/1): ";
		cin >> opt2;
		cout << "He: ";
		cin >> elm;
		if (opt2)
			List[i] = new Boss(lv, elm);
		else
			List[i] = new Casual(lv, elm);
	}
}

int main()
{
	Character *List[100];
	int n;
	cout << "So nhan vat: ";
	cin >> n;
	for (int i = 1; i <= n; i++) Import(List,i);	
	int t = 0;
	for (int i = 1; i <= n; ++i)
		if (List[i]->GetDamage() > List[t]->GetDamage())
			t = i;
	cout << "Nhan vat co sat thuong lon nhat: " << t << endl;
	int x, y;
	cout << "So sanh 2 nhan vat: ";
	cin >> x >> y;
	int A = List[x]->DamageTo(List[y]);
	int B = List[y]->DamageTo(List[x]);
	if (A > B)
		cout << "A co dmg cao hon B";
	else if (B > A)
		cout << "B co dmg cao hon A";
	else
		cout << "2 ben co dmg bang nhau";

	return 0;
}
