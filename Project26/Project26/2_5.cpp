#include<iostream>
#include<string.h>
using namespace std;
class string1
{
	char *name_string;
	int length;
public:
	string1() // default constructr
	{
		name_string = NULL;
		length = 0;
	}
	string1(char *s)
	{
		length = strlen(s)+1;
		name_string = new char[length ];
		strcpy_s(name_string, length, s);
	}
	string1(string1 &s)
	{

		length = strlen(s.name_string)+1;
		name_string = new char[length ];
		strcpy_s(name_string, length , s.name_string);
	}
	void operator +(string1 b)
	{
		string1 c;
		c.length = length + b.length+1;
		c.name_string = new char[c.length];
		strcpy_s(c.name_string, c.length, name_string);
		strcat_s(c.name_string,c.length , b.name_string);
		cout << c.name_string;
	}

	char& operator [](int n)
	{
		return name_string[n];
	}
	string1 operator =(string1 s)
	{
		if (name_string != NULL)
			delete[]name_string;
		else
		{
			length= s.length + 1;;
			name_string = new char[len];
			strcpy_s(name_string,length, s.name_string);
		}
		return (*this);
	}
	friend ostream& operator << (ostream &cout, string1);
	friend istream& operator >> (istream &cin, string1 &s);
};
ostream& operator <<(ostream &cout, string1 a)
{
	cout << " name  is" << a.name_string << endl;
	cout << "length is" << a.length_string << endl;
	return cout;
}
istream & operator >> (istream &cin, string1 &s)
{
	s.name_string = new char[25];
	cout << "enter name" << endl;
	cin >> s.name_string;
	s.length = strlen(s.name_string) + 1;
	return cin;
}
int main()
{
	string1 s1("hii"), s2("hello"), s3, s4, s5;
	s1 + s2;
	cout << "after overloading + operator" << endl;
	s2[3] = 'i';
	cout << "after overloading [] operator is " << endl;
	cout << s2;
	s4 = s2;
	cout << "after overloading = operator is " << endl;
	cout << s4;
	cin >> s5;
	cout << s5;
	return 0;
}
