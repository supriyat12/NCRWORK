#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next,*prev;
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
		temp = new node;//creating a new node
		temp->data = ele;//data of the node is the element to be inserted
		temp->prev = NULL;
		temp->next = start;
		if (start != NULL)//if a node already exits in the list

		{
			start->prev = temp;
			start = temp;
		}
	}
	void insert_last(int ele)
	{
		struct node *temp, *cur = start;
		temp = new node;
		temp->data = ele;
		temp->next = NULL;
		if (start == NULL)//if there are no nodes in the list
		{
			temp->prev = NULL;
			start = temp;
		}
		else
			while (cur->next != NULL)
			{
				temp->prev = cur;
				cur->next = temp;
			}

	}
	void insert_after(int ele, int ser)//inserts a node after particular element
	{
		struct node *cur = start, *temp;/*cur is a moving pointer*/
		if (start != NULL) //checks if the list is empty
		{
			while (cur != NULL&&cur->data != ser)
			{
				cur = cur->next;
			}
			if (cur != NULL)
			{
				cout << "element found";
				temp = new node;
				temp->data = ele;
				temp->prev = cur;
				temp->next = cur->next;
				if (cur->next != NULL)
				{
					cur->next->prev = temp;
				}
				cur->next = temp;

			}
			else
				cout << "element not found";
		}
		else
			cout << "empty list";
	}
	void insert_before(int ele, int ser)
	{
		struct node *cur = start, *temp;/*cur is a moving pointer*/
		if (start != NULL)
		{
			while (cur != NULL&&cur->data != ser)
			{
				cur = cur->next;
			}
			if (cur != NULL)
			{
				temp = new node;//creating a new node
				temp->data = ele;
				temp->prev = cur->prev;
				temp->next = cur;
				if (cur->prev != NULL)
					cur->prev->next = temp;
				else
					start = temp;
				temp->prev = NULL;

			}
			else
				cout << "element not found";
		}
		else
			cout << "list is empty";
	}
	int delete_first()
	{
		int x = -1;
		if (start != NULL)
		{
			struct node*temp;
			temp = start;
			if (temp->next != NULL)
				temp->next->prev = NULL;
			start = temp->next;
			x = temp->data;
			delete temp;
		}
		else
			cout << "list is empty";
		return x;
	}
	void delete_spec(int ser)
	{
		if (start != NULL)
		{
			struct node *cur;
			cur = start;
			while (cur != NULL&&cur->data != ser)
				cur = cur->next;
			if (cur != NULL)
			{
				if (cur->prev != start)
					cur->prev->next = cur->next;
				else
					start = cur->next;
				if (cur->next != NULL)
					cur->next->prev = cur->prev;
				delete cur;
			}
			else
				cout << "element not found";
		}
		else
			cout << "list is empty";
	}
	void display_for()
	{
		struct node *cur = start;
		if (start == NULL)
		{
			cout << "empty list";
		}
		while (cur->next != NULL)
		{
			cout << cur->data;
			cur = cur->next;
		}
	}
	void travel_back()
	{
		struct node *cur;
		if (start != NULL)
		{
			cur = start;
			while (cur->next != NULL)
				cur = cur->next;
			while (cur != NULL)
			{
				cout << cur->data;
				cur = cur->next;
			}
		}
	}
};
int main()
{
	list l;
	int n;
	char ch;
	cout << "1.insert_first 2.insert_last 3.insert_after 4.insertbefore 5.delete_first 6.delete_spec 7.dispaly 8.travelback";
	cout << "enter the option";
	cin >> n;
	while ()
	{
		switch (n)
		{
		case 1:int elem;
			cout << "enetr data o be inserted";
			cin >> elem;
			l.insert_first(elem);
			break;
		case 2:
			cout << "enetr data o be inserted";
			cin >> elem;
			l.insert_last(elem);
			break;
		case 3:int serc;
			cout << "enetr data o be inserted and element after which data to be inserted";
			cin >> elem >> serc;
			l.insert_after(elem, serc);
			break;
		case 4:
			cout << "enetr data o be inserted and data before which it must be inserted";
			cin >> elem >> serc;
			l.insert_before(elem, serc);
			break;
		case 5:
			l.delete_first();
			break;
		case 6:int ser;
			cout << "enetr data o be deleted";
			cin >> ser;
			l.delete_spec(ser);
			break;
		case 7: l.display_for();
			break;
		case 8: l.travel_back();
			break;

		}
	}
	system("pause");
	return 0;
}