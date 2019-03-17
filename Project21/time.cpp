#include<iostream>
using namespace std;
//time addition
class time
{
	int hours, minutes, seconds;
public:
	time()
	{
		hours = minutes = seconds = 0;
	}
	time(int a, int b, int c)
	{
		hours = a;
		minutes = b;
		seconds = c;
	}
	void display()
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
	time add(time b)
	{
		time c;
		c.seconds = seconds+ b.seconds;
		c.minutes = minutes + b.mintues + (c.seconds / 60);
		c.hours = hours + b.hours + (c.minutes / 60);
		c.minutes = c.minutes % 60;
		c.seconds = c.seconds % 60;
		return c;
	}
};
int main()
{
	time t1(6, 50, 30), t2(3, 14, 25), t3;
	t3 = t1.add(t2);
	t3.display();
	return 0;
}
