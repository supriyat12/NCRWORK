#include<iostream>
#include<string.h>
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
	int flag = 0, m,i;
	stack1 s1;
	cin >> m;
	s1.getsize(m);
	char str[20];
	cin >> str;
	for (i = 0; i < strlen(str); i++)
	{
		if (flag == 1 )
		{
			cout << "not balanced";
			break;
		}
		if (s1.isempty())
		{
			cout << "balanced";
		}
      
		switch (str[i])
		{
		case '(':if (str[i] == '(')
			s1.push('(');
			break;
		case '[':if (str[i] == '[')
			s1.push('[');
			break;
		case ')' || ']':

		while (s1.isempty())
			{
				char ch = s1.peek();
				if ((str[i] == ')'&& ch == '(') || (str[i] == ']'&& ch == '['))
				{
					char x = s1.pop();
					//break;
				}
				else
				{

					flag = 1;
					break;
				}
			}
		}
	}
	system("pause");
	/*if (flag = 0 && s1.isempty())
		cout << "balanced expression";
*/}

