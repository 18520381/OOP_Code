#pragma once
#include "Monster.h"

class Casual : public Monster
{
public:
	Casual(int lv, int elm) : Monster(lv, lv * 3, elm) 
	{}
};