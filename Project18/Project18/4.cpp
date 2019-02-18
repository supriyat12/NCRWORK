#include<iostream>
using namespace std;
inline int add(int x, int y)
{
	int z;
	z = x + y;
	cout << "hello";
	return z;
}
inline int sub(int x, int y)
{
	return x - y;
}
inline int mul(int x, int y)
{
	return x*y;
}
int main()
{
	int a,m,n,s, b;
	cin >> a >> b;
	getchar();
	m=add(a, b);
	
	n=sub(a, b);
	s=mul(a, b);
	cout << m << n << s;
	return 0;
	//getchar();
}