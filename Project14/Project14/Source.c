#include<stdio.h>
#include<string.h>
void delete1(char s[10], char ch)
{
	int i,j;
	for(i=0;i<strlen(s);i++)
	{
		if (s[i] == ch)
			for (j = i; j < strlen(s); j++)
			{
				s[i] = s[i + 1];
			}
	}
	
	printf("%s", s);
}
int main()
{
	char s1[10],ch;
	scanf_s("%s", s1);
	scanf_s("%c", &ch);
	delete1(s1, ch);
}