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
		char x=' ';
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
		char x=' ';
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
	int precedence(char ch1)
	{
		if (ch1 == '*' || ch1 == '/')
			return 3;
		else if (ch1 == '+' || ch1 == '-')
			return 2;
		else if (ch1 == ')' || ch1 == '(')
			return 1;
		else
			return 0;
	}
	void postfix(char str[20])
	{
		int i, j = 0;
		char str1[20];
		for (i = 0; i < strlen(str); i++)
		{
			switch (str[i])
			{
			/*case '(':
				push(str[i]);
				break;*/
			case '*':
			case '/':
			case'+':
			case '-':
				
				if (isempty())
				{
					push(str[i]);
				}
				else
				{
					char ch;
					ch = peek();
					if (precedence(ch) >= precedence(str[i]))
					{
						str1[j] = pop();
						j++;
					}
					else
						push(str[i]);
				}
					break;
				
			/*case ')':
				if (!isempty())
				{
					while (sta.s[sta.top] != '(')
					{
						str[j] = pop();
						j++;

					}
				}
				break;*/
			default :
				if (str[i] > 97 && str[i] < 123)
					str[j] = str[i];
				j++;
				break;
			}
		}
		cout << str1;
	}
};
int main()
{
	int  m;
	stack1 s1;
	cin >> m;
	s1.getsize(m);
	char str[20];
	cin >> str;
	s1.postfix(str);
	system("pause");
		
	}