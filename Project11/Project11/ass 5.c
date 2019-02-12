#include<stdio.h>
struct country1
{
	char country[10];
	char capital[10];
};
int main()
{
	int i;
	FILE *fp;
	fopen_s(&fp, "first.txt", "a+");
	struct country1 s;
	for (i = 0; i < 5; i++)
	{
		fwrite(&s, sizeof(struct country1), 1, fp);
	}
	return 0;
	getchar();
}