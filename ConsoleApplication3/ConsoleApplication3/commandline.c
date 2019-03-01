#include<Windows.h>
#include<stdio.h>
int main()
{
	int i, nargs;
	LPWSTR *szArglist;
	szArglist = CommandLineToArgvW(GetCommandLineW(), &nargs);
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

	printf(" %d  size of %S",wcslen(widarr)+1,widarr);
	ret1=WideCharToMultiByte(CP_UTF8, 0, warr,-1,NULL, 0, NULL, NULL);
	marr = (char *)malloc(sizeof(char)*ret1);

	WideCharToMultiByte(CP_UTF8, 0, warr, -1, marr, ret1, NULL, NULL);
	printf("%dsize of %s\n\n\n", strlen(marr) + 1, marr);
	
	
	
	free(marr);
	free(widarr);
	// GetLastError();
	 //free(marr);
	 system("pause");
	return 0;
	
}


