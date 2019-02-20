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
		char x = ' ';
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
		if (!isempty())
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
	void posteval(char str[20])
	{
		int  i;
		for (i = 0; i < strlen(str); i++)
		{
			switch (str[i])
			{
			case 0-9:
				push(str[i]);
				break;
			case '*':
			case '/':
			case '+':
			case '-':
				if (!isempty())
				{
					char ch1 = pop();
					char ch2 = pop();
					if (str[i] == '+')
						push(ch2 + ch1);
					if (str[i] == '-')
						push(ch2 - ch1);
					if (str[i] == '*')
						push(ch2 * ch1);
					if (str[i] == '/')
						push(ch2 / ch1);

				}
				break;

			}
		}
		cout << pop();
   }
};
int main()
{
	int m;
	char s1[20];
	cin >> m;
	cin >> s1;
	stack1 s;
	s.getsize(m);
	s.posteval(s1);
	system("pause");

}