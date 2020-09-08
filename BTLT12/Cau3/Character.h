#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Character
{
protected:
	int level;
	int damage;
public:
	Character(int lv, int dmg)
	{
		level = lv;
		damage = dmg;
	}
	int GetLevel()
	{
		return level;
	}
	int GetDamage()
	{
		return damage;
	}
	void Set(int lv, int dmg)
	{
		level = lv;
		damage = dmg;
	}

	virtual int GetElement()
	{
		return 0;
	}

	float DamageTo(Character* other)	
	{
		int myElm = GetElement();			
		int othElm = other->GetElement();	
		if (othElm - myElm == 1 || (myElm == 5 && othElm == 1))
			return 1.1f * damage;
		int conflict[6] = { 1, 3, 5, 2, 4, 1 };
		int reverse[6] = { 1, 4, 2, 5, 3, 1 };
		for (int i = 0; i < 5; ++i)
			if (myElm == conflict[i] && othElm == conflict[i + 1])
				return 1.2f * damage;
		for (int i = 0; i < 5; ++i)
			if (myElm == reverse[i] && othElm == reverse[i + 1])
				return 0.8f * damage;
		return damage;
	}
};