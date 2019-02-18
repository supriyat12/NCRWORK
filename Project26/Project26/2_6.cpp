#include<iostream>
#include<string.h>
using namespace std;
class string
{
	char *sptr;
	int len;
public:
	string()
	{
		sptr = NULL;
		len = 0;
	}
	string(char *s)
	{
		sptr = (char *)malloc(sizeof(char)*len);

		strcpy(sptr, s);
		len = n;
	}
	string(const string &s1)
	{
		if (sptr != NULL)
		{
			free(sptr);
		}
		len = s1.len;
		sptr = (char *)malloc(sizeof(char)*len);
		strcpy(sptr, s1.sptr);
		return (*this);
	}
	void display()
	{
		cout << "string" << sptr << " length" <<len<< endl;
	}
};
int main()
{
	string s1, s2("supriya", 4),s3;
	s3 = s2;
	display(s2);
	display(s3);
	system("pause");
}