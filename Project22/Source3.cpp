#include<iostream>
using namespace std;
class student
{
	char name[10];
	int rollno;
	int marks[4];
	int total;
	student(char * n, int r, int m[4])
	{
		name = n;
		rollno = r;
		marks = m;
//		total = t;
	}
};
int main()
{
	student s1("supr", 12, 4);
	return 0;
	system("pause");
}