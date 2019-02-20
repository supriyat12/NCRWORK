#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class list
{
	struct node *start;
public:
	list()
	{
		start = NULL;
	}
	void insert_first(int ele)
	{
		struct node *temp;
		temp = new node;
		temp->data = ele;
		temp->next = start;
		start = temp;
	}
	void insert_last(int ele)
	{
		struct node *temp, *cur;

		temp = new node;
		temp->data = ele;
		temp->next = NULL;
		cur = start;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = temp;
	}
	void insert_after(int ser, int ele)
	{
		struct node *temp, *cur;
		temp = new node;
		temp->data = ele;
		cur = start;
		while (cur != NULL && cur->data != ser)
		{
			cur = cur->next;
		}
		if (cur != NULL)
		{
			temp->next = cur->next;
			cur->next = temp;

		}
		else
			cout << "search element not found";
	}
	void insert_before(int ser, int ele)
	{
		if (start != NULL)
		{
			struct node *temp, *cur;
			temp = new node;
			temp->data = ele;
			cur = start;
			while (cur->next != NULL&& cur->next->data != ser)
			{
				cur = cur->next;
				if (cur->next != NULL)

				{
					temp->data = ele;
					temp->next = cur->next;
					cur->next = temp;
				}
				else
					cout << "element not found";
			}
		}
		else
			cout << "empty list";
	}
	void delete_spec(int ele)
	{
		struct node *temp, *cur;
		if (start != NULL)
		{
			if (start->data == ele)
			{
				temp = start;
				start = temp->next;
				delete temp;
			}
			else
			{
				cur = start;
				while (cur->next != NULL&&cur->next->data != ele)
					cur = cur->next;
				if (cur != NULL)
				{
					temp = cur->next;
					cur->next = temp->next;
					delete temp;
				}
				else
					cout << "element not found";

			}
		}
		else
			cout << "empty list";
	}
	int delete_first(int ele)
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
				
				cout << cur->data<<endl;
				cur = cur->next;
			}
		}
	}
	void reverse()
	{
		struct node *temp, *rev;
		rev = NULL;
		if (start!= NULL)
		{
			if (start->next != NULL)
			{
				//cout << "in reverse fun";
				while (start != NULL)
				{
					temp = start;
					start = temp->next;
					temp->next = rev;
					rev = temp;
					//cout << "in while";
				}
			}
		}
	}

	
};
int main()
{
	list l;
	l.insert_first(10);
	l.display();
	l.insert_after(10,20);
	//l.display();
	l.insert_last(30);
	l.delete_spec(20);
	l.insert_last(40);

	l.display();
	l.reverse();
	l.display();
	system("pause");



}