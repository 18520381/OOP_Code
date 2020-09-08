#pragma once
#include "Character.h"

class Monster : public Character
{
private:
	int element;	
public:
	Monster(int lv, int dmg, int elm) : Character(lv, dmg)
	{
		element = elm;
	}
	int GetElement()
	{
		return element;
	}
};