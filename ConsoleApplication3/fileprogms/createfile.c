#include<Windows.h>
#include<stdio.h>
#include<string.h>
#define MAX 10
int main(int argc,LPSTR argv[])
{
	HANDLE hfile;
	int ret;
	DWORD nbytesw;
	char buff[MAX];

	hfile = CreateFile(L"sample1.txt", GENERIC_WRITE, 0, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hfile)
	{
		printf("create file function failed");
		return 0;
	}
	strcpy(buff, "hi hello");
	ret = WriteFile(hfile, buff,strlen(buff),&nbytesw, NULL);
	if (ret == 0)
	{
		printf("cannot write");
		return 0;
	}
	else
		printf("contents of %s is %S", argv[1],buff);
	system("pause");
		return 1;

	CloseHandle(hfile);

}
