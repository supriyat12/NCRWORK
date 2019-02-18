#include<iostream>
using namespace std;
struct stack
{
	int top;
	int size;
	char * s;
};
class stack1
{
	struct stack sta;
public:
	stack1()
	{
		sta.top = -1;
		sta.s = NULL;
		sta.size = 0;
	}
	void getsize(int n)
	{
		sta.size = n;
		sta.s = new char[n];
	}
	bool isempty()
	{
		return(sta.top == -1);
	}
	bool isfull()
	{
		return(sta.top == sta.size - 1);
	}
	void push(char ch)
	{
		if (!isfull())
			sta.s[++sta.top] = ch;
		else
			cout << "stack is full";
	}
	char pop()
	{
		char x;
		if (!isempty())
		{
			x = sta.s[sta.top--];
		}
		else
			cout << "stack is empty";
		return x;
	}
	char peek()
	{
		char x;
		if(!isempty())
		{
			x = sta.s[sta.top];
		}
		else
			cout << "stack is empty";
		return x;
	}
	void display()
	{
		int i;
		for (i = sta.top; i > -1; i--)
		{
			cout << sta.s[i];
		}
	}
};
int main()
{
	int m;
	char str1,str2,str3,str4,str5;
	cin >> m >> str1 >> str2 >> str3;
	stack1 s1;
	s1.getsize(m);
	s1.push(str1);
	s1.push(str2);
	s1.push(str3);
	str4=s1.pop();
	str5 = s1.peek();
	s1.display();
	system("pause");

}