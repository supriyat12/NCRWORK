#include<iostream>
using namespace std;
class dot
{
	int x;
	int y;
public:
	dot(int a, int b)
	{
		x = a;
		y = b;
	}
	dot(int a)
	{
		x = a;
		y = a;
	}
	friend void dist(dot d1,dot d2);
};
void dist(dot d1,dot d2)
{
	int dis;
	dis = (d2.x - d1.x) + (d2.y - d1.y);
	cout << dis;
}
int main() {
	dot d1(2, 3), d2(1);
	dist(d1, d2);
	system("pause");
	return 0;
}