#include<iostream>
using namespace std;
struct node
{
	int coef;
	int pow;
	struct node *next;

};
class list
{
	struct node *l1start, *l2start, *l3start;
public:
	list()
	{
		cout << "in default constructor";
		l1start = NULL;
		l2start = NULL;
		l3start = NULL;
	}
	void insert_last(int ele, int power)
	{
		struct node *temp, *cur;

		temp = new node;
		temp->coef = ele;
		temp->pow = power;
		temp->next = NULL;
		cur = l3start;
		if (l3start == NULL)
			l3start = temp;
		else
		{
			while (cur->next != NULL)
			{
				cur = cur->next;
			}
			cur->next = temp;
		}
	}
	void insert_last1(int ele, int power)
	{
		struct node *temp, *cur;

		temp = new node;
		temp->coef = ele;
		temp->pow = power;
		temp->next = NULL;
		cur = l1start;
		if (l1start == NULL)
			l1start = temp;
		else
		{
			while (cur->next != NULL)
			{
				cur = cur->next;
			}
			cur->next = temp;
		}
		cout << "in insert function";
	}
	void insert_last2(int ele, int power)
	{
		struct node *temp, *cur;

		temp = new node;
		temp->coef = ele;
		temp->pow = power;
		temp->next = NULL;
		cur = l2start;
		if (l2start == NULL)
			l2start = temp;
		else
		{
			while (cur->next != NULL)
			{
				cur = cur->next;
			}
			cur->next = temp;
		}
	}
	void polyadd()
	{
		int element, power;
		struct node *cur1, *cur2;
		cur1 = l1start;
		cur2 = l2start;
		while (cur1 != NULL&&cur2 != NULL)
		{
			if (cur1->pow == cur2->pow)
			{
				element = cur1->coef + cur2->coef;
				power = cur1->pow;
				insert_last(element, power);
				cur1 = cur1->next;
				cur2 = cur2->next;
			}
			else if (cur1->pow > cur2->pow)
			{

				insert_last(cur1->coef, cur1->pow);
				cur1 = cur1->next;
			}
			else
			{
				insert_last(cur2->coef, cur2->pow);
				cur2 = cur2->next;
			}
		}

	}
	void display()
	{
		struct node *cur;
		cur = l3start;
		while (cur != NULL)
		{
			cout << cur->coef << cur->pow << endl;
			cur = cur->next;
		}
	}
};
int main()
{
	list l1;
	l1.insert_last1(5, 3);
	l1.insert_last1(2, 2);
	l1.insert_last1(3, 1);
	l1.insert_last2(6, 3);
	l1.insert_last2(4, 1);
	//l1.insert_last1(5, 3);
	l1.polyadd();
	l1.display();
	system("pause");
}