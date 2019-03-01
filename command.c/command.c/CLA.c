#include<Windows.h>
#include<stdio.h>
int main()
{
	int i,nargs;
	LPWSTR *szArglist;
		szArglist=CommandLineToArgvW(GetCommandLineW(),&nargs);
		if (szArglist == NULL)
		{
			printf("failed");
			return 0;
		}
		else
		{
			for (i = 0; i < nargs; i++)
			{
				printf("%d %S", i, szArglist[i]);
			}
			system("pause");

			return 1;
		}
	return 0;
}