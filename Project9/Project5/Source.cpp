#include<stdio.h>
int main()
{
	FILE *fp;
	fopen(&fp, "TextFile.txt", "r");
	countpr(fp);
	replace(fp);

}