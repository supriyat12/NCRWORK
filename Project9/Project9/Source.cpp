
#include<stdio.h>
	void countpr(FILE *fp)
	{
		fopen_s(&fp, "TextFile1.txt", "r");
		int alp_count = 0, dig_count = 0, spa_count = 0, spec_count = 0;

		/*s=fread()*/
		char ch;

	while(!feof(fp))
		{
			ch = fgetc(fp);
			if (ch > 'A' && ch < 'Z'||ch>'a' && ch>'z')/*checks for alphabet*/
		
				alp_count++;
			else if (ch ==' ')/*checks for space*/
			{
				spa_count++;
			}
			else if (ch > '0' && ch < '9')/*checks for digit*/
			{
				dig_count++;
			}
			else
			{
				spec_count++;
			}
			fp++;
		}
		printf("no of alphabets %d no of digits %d no of spaces %d no of special char %d", alp_count, dig_count, spa_count, spec_count);
	
	}
	int main()
	{
		FILE *fp;
		fopen_s(&fp, "TextFile1.txt", "r");
		countpr(fp);
	}