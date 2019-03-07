#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
#define MAX 10
int main()
{

	HANDLE hfile;
	char buff[MAX];
	SECURITY_ATTRIBUTES SA;
	SA.lpSecurityDescriptor=TRUE;
	hfile = CreateFile(L"sample2.txt", GENERIC_WRITE,0,&SA, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hfile)
	{
		printf("create file function failed");
		return -1;
	}
	return 0;
	}