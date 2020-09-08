class Point
{
private:
	float x, y;
public:
	Point(float a = 0, float b = 0)
	{
		x = a;
		y = b;
	}
	Point(Point &p)
	{
		x = p.x;
		y = p.y;
	}
	void Nhap(float a, float b)
	{
		x = a;
		y = b;
	}
	void setX(float a)
	{
		x = a;
	}
	void setY(float a)
	{
		y = a;
	}
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
};

