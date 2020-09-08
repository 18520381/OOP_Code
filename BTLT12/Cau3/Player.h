#include "Character.h"

class Player : public Character
{
private:
	int clan;		
public:
	Player(int lv, int cl) : Character(lv, lv * 5) 
	{
		clan = cl;
	}
	int GetElement()
	{
		return (clan - 1) / 2 + 1;
	}
};