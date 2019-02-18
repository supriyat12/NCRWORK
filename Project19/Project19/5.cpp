#include<iostream>
using namespace std;
class distance1;

class distance2
{
	int feet;
	int inch;
public:
	distance2(int x, int y)
	{
		feet = x;
		inch = y;
	}
	void add(distance1 obj);
};
	
class distance1
{
	int ms;
	int cms;
public:
	distance1(int m, int c)
	{
		ms = m;
		cms = c;
	}
	friend void distance2::add(distance1);
};

void distance2::add(distance1 obj)
{
	feet = feet + obj.ms;
	inch = inch + obj.cms;
	cout << feet << "feets" << inch << "inches";
}

int main()
{
	distance1 d1(20, 10);
	distance2 d2(4, 6);
	d2.add(d1);
	system("pause");
}