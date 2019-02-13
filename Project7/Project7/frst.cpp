#include<iostream>
using namespace std;
class time
{
	int hrs;
	int min;
	int sec;
public:
	time()
	{
		hrs = 0;
		min = 0;
		sec = 0;
	}
	time(int h, int m, int s)
	{
		hrs = h;
		min = m;
		sec = s;
	}
	void display()
	{
		cout << hrs << ":" << min << ":" << sec<<endl;
	}
	void add(time t1, time t2)
	{
		hrs = t1.hrs+t2.hrs;
		min = t1.min+ t2.min;
		sec = t1.sec + t2.sec;
	}
};
int main()
{
	time t1, t2(3, 39, 27), t3(t2);
	t2.display();
	t3.display();
	getchar();
}