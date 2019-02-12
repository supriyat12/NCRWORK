#include<stdio.h>
void   remvcomm( FILE *fp)
{
	char ch, ch1;
	while(!feof(fp))
	{
		ch = fgetc(fp);
	
	//to check if comments are encountered
			if (ch == '/')
		{
				fp++;
				ch1 = fgetc(fp);
				if (ch1 == '*' || ch1 == '/')
					ch1 = *fp++;
		
		}
		fp++;
	}
	fprint(fp);
}