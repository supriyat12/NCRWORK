#include<iostream>
using namespace std;
class matrix
{
	int m;
	int n;
	matrix(int a, int b)
	{
		m = a;
		n = b;
	}
	friend void mult(matrix m1, matrix m2);
};
void multiplication(matrix m1, matrix m2)
{

}