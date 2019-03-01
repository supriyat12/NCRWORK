#include<Windows.h>
#include<stdio.h>
int main()
{
	TCHAR envarstring0[] = TEXT("%systemRoot%");
	TCHAR *buf;
	int ret;
	ret = ExpandEnvironmentStringsW(envarstring0,NULL, 0);
	buf = (char *)malloc(sizeof(WCHAR)*ret);
	 ExpandEnvironmentStringsW(envarstring0, buf, MAX_PATH);

	printf("%S",buf);
	system("pause");
	free(buf);
	return 0;
}