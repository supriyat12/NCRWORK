//implement string functions
#include <stdio.h>
#include<stdlib.h>


void string_reverse()
{
	char *string, *reverse_string;
	char ch;
	int n, j = 0, i=2;
	printf("enter string to be reversed\n");
	string= (char*)malloc(sizeof(char));//allocating memory for the string pontr
	while ((ch = getchar()) != '\n')
	{
		if (!isalpha(ch)||ch!=' ')// to check if invalid string is entered
		{
			printf("Invalid input");
			return;
		}
		string = realloc(string, sizeof(char)*i);
		string[j++] = ch;
		i++;

	}
	string[j] = '\0';
	
	reverse_string = (char*)malloc(sizeof(char) * j);
	n = j;
	j = 0;
	for (i = n-1; i >= 0; i--)
		reverse_string[j++] = string[i];
	reverse_string[j] = '\0';
printf(" string after reverse operation:%s\n", reverse_string);
if (errno != 0)
printf("The error msg is :%s", strerror(errno));
}
void string_copy()
{
	int  i = 2, j = 0;
	char ch;
	char *source1, *destination1;
	printf("enter string to be copied\n");
	source1 = (char*)malloc(sizeof(char));
	while ((ch = getchar()) != '\n')
	{
		if (isdigit(ch))
		{
			printf("Invalid input");
			return;
		}
		source1=realloc(source1, sizeof(char)*i);
		source1[j++] = ch;
		i++;

	}
	source1[j] = '\0';
	destination1 = (char*)malloc(sizeof(char) * j);
		while (*source1)
		{
			*destination1 = *source1;
			source1++;
			destination1++;
		}
		*destination1 = '\0';
		destination1 = destination1 - (j);
		printf("string copied to destination is:");
		printf("%s\n", destination1);
		if (errno != 0)
			printf("The error msg is :%s", strerror(errno));
		
}
void string_concat()
{
	int n, n1, i = 2, j = 0;
	char ch;
	char *string1, *string2;
	printf("enter string 1\n");
	string1= (char*)malloc(sizeof(char));
	while ((ch = getchar()) != '\n')
	{
		if (isdigit(ch))
		{
			printf("Invalid input");
			return;
		}
		string1= realloc(string1, sizeof(char)*i);
		string1[j++] = ch;
		i++;

	}
	string1[j] = '\0';
	n = j;
	i = 2;
	j = 0;
	printf("enter string 2\n");
	string2= (char*)malloc(sizeof(char));
	while ((ch = getchar()) != '\n')
	{
		if (isdigit(ch))
		{
			printf("Invalid input");
			return;
		}
		string2= realloc(destination, sizeof(char)*i);
		string2[j++] = ch;
		i++;

	}
	destination[j] = '\0';
	n1 = j;
	while (*string1)// goes till the end of the first string
		string1++;

	while (*string2)
	{
		*string1 = *string2;
		string2++;
		string1++;
	}
	*string1 = '\0';// puts null at  the end of concatenated string.
	string1 = string1 - (n + n1);
	printf("string after concat operation:%s\n", string1);
	if (errno != 0)
		printf("The error msg is :%s", strerror(errno));

}
void string_compare()
{
	int n, n1, i = 2, j = 0;
	char ch;
	char *source, *destination, *string1, *string2;
	printf("enter string1\n");
	source = (char*)malloc(sizeof(char));
	while ((ch = getchar()) != '\n')
	{
		if (isdigit(ch))
		{
			printf("Invalid input");
			return;
		}
		source = realloc(source, sizeof(char)*i);
		source[j++] = ch;
		i++;

	}
	source[j] = '\0';
	string1 = source;
	n = strlen(source);
	i = 2;
	j = 0;
	printf("enter string2\n");
	destination = (char*)malloc(sizeof(char));
	while ((ch = getchar()) != '\n')
	{
		if (isdigit(ch))
		{
			printf("Invalid input");
			return;
		}
		destination = realloc(destination, sizeof(char)*i);
		destination[j++] = ch;
		i++;

	}
	destination[j] = '\0';
	n1 = j - 1;
	string2 = destination;
	while (*source == *destination)
	{
		if (*source == '\0' || *destination == '\0')
			break;

		source++;
		destination++;
	}
	printf("After string comparision\n");
	if (*source == '\0' && *destination == '\0') //when null is encountered in both the strings
		printf("%s and %s  strings are same:0",string1,string2);
	else if (*source >*destination )
		printf("%s is bigger than %s:1",string1,string2);// when ascii of first string greater than second
	else
		printf("%s is smaller than %s:-1", string1, string2);//// when ascii of first string greater than second
	if (errno != 0)
		printf("The error msg is :%s", strerror(errno));



}
int main()
{	
string_reverse();
string_copy();
string_concat();
string_compare();
	getchar();
}
