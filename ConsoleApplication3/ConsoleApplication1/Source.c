#include<Windows.h>
#include<stdio.h>
#include<string.h>

CHAR arr[] = "ansi";
WCHAR warr[] = L"widec";
PCHAR widarr, marr;
TCHAR e = TEXT('e');
int main()
{
	int res, res1, ret, size, ret1;
	res = IsTextUnicode(arr, strlen(arr), NULL);
	if (0 == res)
	{
		printf("%s given arr is not unicode", arr);
	}
	else
		printf("%s given arr is a unicode", arr);
	res1 = IsTextUnicode(warr, wcslen(warr), NULL);
	if (0 == res1)
	{
		printf("%S given warr is not a unicode", warr);
	}
	else
		printf("%S given warr is a unicode", warr);

	printf("%S %c", warr, e);
	ret = MultiByteToWideChar(CP_UTF8, 0, arr, -1, NULL, 0);
	widarr = (WCHAR *)malloc(sizeof(WCHAR)*ret);
	size = MultiByteToWideChar(CP_UTF8, 0, arr, -1, widarr, ret);


	printf(" %d  size of %S", wcslen(widarr) + 1, widarr);
	ret1 = WideCharToMultiByte(CP_UTF8, 0, warr, -1, NULL, 0, NULL, NULL);
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


