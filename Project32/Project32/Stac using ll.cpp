#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node * next;
};
class stack1
{
	
	struct node *start;
public:
	stack1()
	{
		start = NULL;
		
	}
	void push(int ele)
	{
		struct node *temp, *cur;
		temp = new node;
		temp->data = ele;
		temp->next = start;
		start = temp;
	}
	int pop()
	{
		int x = -999;
		if (start != NULL)
		{
			struct node *temp;
			temp = start;
			start = start->next;
			x = temp->data;
			delete temp;
		}
		else
			cout << "empty list";
		return x;
	}

	void display()
	{
		struct node *cur;
		cur = start;

		if (cur == NULL)
			cout << "empty list";
		else
		{
			while (cur != NULL)
			{

				cout << cur->data << endl;
				cur = cur->next;
			}
		}
	}
};
int main()
{
	int m, n, p;
	cin >> m >> n >> p;
	stack1 s;
	s.push(m);
	s.push(n);
	s.push(p);

	s.display();
s.pop();
s.display();
system("pause");
}