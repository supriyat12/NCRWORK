#include<stdio.h>
#include<string.h>
int match(char *s, char *t)
{
	int i = 0, j = 0;
	while (*t != '\0')
	{
		while (*s != '\0')
		{
			if (*s == *t)
			{
				return j;
			}
			j++;
			s++;
		}
		i++;
		t++;
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