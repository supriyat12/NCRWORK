#include<stdio.h>
void main()
{
	int X, P, N, RESULT;
	int invert(int, int, int);

	printf("Enter an integer : \n");
	scanf_s("%d", &X);
	printf("enter start position\n");
	scanf_s("%d", &P);
	printf("enter the length\n");
	scanf_s("%d", &N);
	printf("converted binary value is", X);
	RESULT = invert(X, P, N);
	printf("in decimal form %d", RESULT);
	getchar();
	
}

int invert(int X, int P, int N)
{
	int I, Y, LIMIT, LEN, BIN[15];
	LEN = 0;
	while (X>0)
	{
		BIN[LEN] = X % 2;
		X = X / 2;
		LEN++;
	};

	for (I = LEN - 1; I>-1; I--)
	{
		printf("%d ", BIN[I]);
	}
	printf("\n");
	LIMIT = P + N;
	if (LIMIT < LEN)
	{
		for (I = P - 1; I<P + N - 1; I++)
		{
			if (BIN[I] == 0)
				BIN[I] = 1;
			else
				BIN[I] = 0;
		}
	}
	else
	{
		printf("lrge value entered for p an n");
	}

	printf("inverted integer is\t");
	for (I = LEN - 1; I>-1; I--)
	{
		printf("%d ", BIN[I]);
	}
	Y = 0;
	for (I = LEN - 1; I >= 0; I--)
	{
		Y = Y * 2 + BIN[I];
	}
	return Y;
}