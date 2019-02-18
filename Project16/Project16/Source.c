#include<stdio.h>
#include<string.h>
int match(char s[10], char t[10])
{
	int i , j ;
	for(i=0;i<strlen(t);i++)
	{
		for (j = 0; j<strlen(s); j++)

		{
			if (s[j]== t[i])
			{
				return j;
			}
			j++;
			//s++;
		}
		i++;
		//t++;
	}
	return 0;
}
int main()
{
	char s1[10], s2[10];
	scanf_s("%s", s1);
	scanf_s("%s", s2);
	match(s1, s2);
	return 0;

}