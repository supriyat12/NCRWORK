#include<iostream>
#include<string.h>
using namespace std;
class student
{
	char name[10];
	int rollno;
	int marks[4] = { 20,30,40,50 };
	int total;
public:
	student()
	{
		memset(name,0,10);
		rollno = 0;


	}
		friend ostream &operator<<(ostream &cout, student s);
		friend istream &operator>>(istream &cin, student &s);
		friend void get_result(student s[],int n);
	
};
ostream &operator<<(ostream &cout, student s)
			{
				cout << "name " << s.name  <<  "\n rollno "   << s.rollno << " total "<<s.total<<endl;
				for (int i = 0; i < 4; i++)
				{
					cout << "\n"<<s.marks[i];
				}
				
				cout << "opertor overloading";
				return (cout);

			}
istream &operator>>(istream &cin, student &s)
		{
			cin >> s.rollno;
	cin >> s.name;
			
		
			return (cin);
			//cout
		}
void get_result(student s[],int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			s[j].total = s[j].marks[i];
		}
	}
}

int main()
{
	
	student s1,s2,s3;
	cin >> s1;
	s1.get_result();

	cout << s1;
	system("pause");
	return 0;
	//system("pause");
}
