#include<stdio.h>
void replace(FILE *fp)
{
	fopen_s(&fp, "TextFile1.txt", "r");
	char ch;
	while(!feof(fp))
	{
		ch = fgetc(fp);
		if (ch == '	')
		{
			ch = '\t';
		}
		fp++;
	}
	
}
int main()
{
	FILE *fp;
	fopen_s(&fp, "TextFile1.txt", "r");
	replace(fp);
}