#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void strreverse(char string1[])
{
	int i = 0, length = strlen(string1), j = length - 1;
	printf("String before reversing : %s\n", string1);
	char *string_reverse;
	string_reverse = (char *)malloc(sizeof(char)*(length + 1));
	string_reverse[length] = '\0';
	for (i = 0; j >= 0, i < length; i++)
		string_reverse[j--] = string1[i];

	printf("reverse of string is : %s\n", string_reverse);
	getchar();
}
void strcompare(char string1[], char string2[])
{
	printf("%s %s", string1, string2);
	int i = 0, flag = 0;
	while (string1[i] != '\0' && string2[i] != '\0') // until atleast one string ends
	{
		if (string1[i] != string2[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0 && string1[i] == '\0' && string2[i] == '\0')//if both strings ended
		printf("both are same : 0");
	else if (string1[i] > string2[i])//if ascii value of first greater than second string
		printf("string1 is greater than string2 : +1");
	else
		printf("string1 is lesser than string2 : -1");////if ascii value of first is smaller than second string
	getchar();
}
void strcopy(char string1[])
{
	int i = 0;
	char *string2;
	string2 = (char *)malloc(sizeof(char)*strlen(string1));//allocating memory for string pointer dynamically

	for (i = 0; *string1 != '\0'; ++i)
	{
		string2[i] = string1[i];
	}

	string2[i] = '\0';
	printf("String s2: %s", string2);

}

int main()
{

	int i = 0, count = 2;
	char *string1 = NULL, *string2 = NULL;
	char temp = ' ';
	printf("enter string 1 : ");
	string1 = (char *)malloc(sizeof(char));//allocating memory for string pointer dynamically
	while ((temp = getc(stdin)) != '~')// enters the while loop untill delimeter ~ is encountered
	{
		string1[i++] = temp;
		realloc(string1, sizeof(char)*count);
		count++;
	}
	string1[i] = '\0';//adding null at the end of string

	getc(stdin);
	printf("enter string 2 : ");
	i = 0;
	count = 2;
	string2 = (char *)malloc(sizeof(char));
	while ((temp = getc(stdin)) != '~')// enters the while loop till delimeter ~ is encountered
	{
		string2[i++] = temp;
		realloc(string2, sizeof(char)*count);
		count++;
	}
	string2[i] = '\0';

	strreverse(string1);// call to string reverse function
	strcompare(string1, string2);// call to string compare function
	strcopy(string1);

	getchar();
	return 0;
}