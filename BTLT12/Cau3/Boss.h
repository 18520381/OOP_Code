#pragma once
#include "Monster.h"

class Boss : public Monster
{
public:
	Boss(int lv, int elm) : Monster(lv, lv * 7, elm) 
	{}
};