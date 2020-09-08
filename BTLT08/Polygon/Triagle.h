#include "Polygon.h"

class Triagle : public Polygon
{
public:
	Triagle()
	{
		n = 3;
	}
	~Triagle()
	{
		n = 0;
	}
};