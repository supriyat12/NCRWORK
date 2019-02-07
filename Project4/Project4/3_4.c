#include<stdio.h>
#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define F 15
int h, a[20];
scanf_s("%x", &h);

int hex_to_bin(int h)
{
	int i = 0,
	h1 = h;
	while (h1 > 0)
	{
		a[i] = h1 % 2;
		h1= h1/ 2;
		i++;
	}
	for (j = 0; i >= 0; j++, i--)
	{
		b[j] = a[i];
	}
}
int ch;
scanf_s("%d", &ch);
switch (ch)
{
case 1:

}

