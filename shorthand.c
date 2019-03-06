#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void expand(char *p)//function to expand short hand notation
{
	printf("string after expanding shorthand notation is\n");
	int i = 0, k, l;
	while (*(p + i) != '\0')
	{
		if (p[i] != '-')				//printing characters till'-'
			printf("%c", p[i]);
		else
		{
			if (isalpha(*(p + (i - 1))))   //to check if an alphabet is given as input
			{
				k = (int)(*(p + (i - 1)));		//asci values of alphabets is considered.
				l = (int)(*(p + (i + 1)));
				k++;
				while (k<l)						//loop for printing expanded shorthand notation.
					printf("%c",k++);
			}
			else
			{
				k = (*(p + (i - 1)));	
				l = (*(p + (i + 1)));
				k++;
				while (k<l )				//loop for printing expanded shorthand notation.
					printf("%c", k++);
			}
		}
		i++;
	}
	getchar();
}
int main()
{
	char *string1;
	int i=1,length,flag=0;
	string1 = NULL;
	printf("enter the length of the string \n");
	scanf("%d",&length);
	string1 = (char *)malloc(sizeof(char)*(length+1)); // dynamic memory allocation for the pointer
	if (string1 == NULL)
	{
		printf("memory not allocated\n");	//failed memory allocation
		return 0;
	}
	else
	{
		printf("enter string of size %d\n",len);
		scanf("%s",string1);
	
		if (!isalpha(string1[0])||!isdigit(string1[0]))		//if 1st character is invalid 
		{
			printf("invalid input....please enter the string properly \n");
			getchar();
		}
		if (!isalpha(string1[len-1]) || !isdigit(string1[len-1]))   //last character is invalid
		{
			printf("invalid input....please enter the string properly\n");
			getchar();
		}
		
		while (string1[i] != '\0')
		{
			if (string1[i] == '-')
			{
				if ((isdigit(string1[i - 1]) && !isdigit(string1[i + 1])) || (!isdigit(string1[i - 1]) && isdigit(string1[i + 1])))
				{
					flag = 1;
					printf("invalid input....please enter the string properly\n");        //when a combination of alpabet and number is given 
                                                                                                              //as input
				}
				if ((isalpha(string1[i - 1]) && !isalpha(string1[i + 1])) || (!isalpha(string1[i - 1]) && isalpha(string1[i + 1])))
				{
					flag = 1;
					printf("invalid input....please enter the string properly\n");
				}
				if (string1[i + 1] == '-')
				{
					printf("invalid input....please enter the string properly\n");
					flag = 1;
				}
				if ((islower(string1[i - 1]) && !islower(string1[i + 1])) || (isupper(string1[i - 1]) && !isupper(string1[i + 1])))
				{
					flag = 1;
					printf("invalid input....please enter the string properly\n");
				}
                             if(string1[i-1]>string1[i+1])
                             {
                              flag=1;
                              printf("invalid input....please enter the string properly\n");
                              }
			}
			else if (!isalpha(string1[i]) || !isdigit(string1[i]))
			{
				printf("invalid input....please enter the string properly\n");
				break;
			}
                       
			else
				continue;

			if (flag == 1)
				break;
			i++;
		}
		if(flag==0)
		expand(string1); //call the expand function when a valid input is entered
		getchar();
		return 0;
	}
}