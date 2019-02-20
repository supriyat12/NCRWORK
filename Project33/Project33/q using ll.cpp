#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node * next;
};
class queue1
{
	struct node *start;
public:
	queue1()
	{
		start = NULL;
	}
	void enqueue(int ele)
	{
		struct node *temp, *cur;
		temp = new node;
		temp->data = ele;
		temp->next = NULL;
		cur = start;
		if (start == NULL)
		{
			start = temp;
		}
		else
		{
			while (cur->next != NULL)

				cur = cur->next;
			cur->next = temp;
		}
	}
	int dequeue()
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
	int x, y, z;
	cin >> x >> y >> z;
	queue1 q1;
	q1.enqueue(x);
	q1.enqueue(y);
	q1.enqueue(z);
	q1.display();
	q1.dequeue();
	q1.display();
	system("pause");
}