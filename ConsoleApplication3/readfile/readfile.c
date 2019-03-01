#include<Windows.h>
#include<stdio.h>
#define BUFSIZE 100
int main(int argc, TCHAR *argv[])
{
	HANDLE hfile;
	//LPCSTR filename = "sample.txt";
	int ret;
	DWORD nbytesr;
	TCHAR buff[BUFSIZE];
	ZeroMemory(&buff, BUFSIZE);
	hfile = CreateFileA(argv[1], GENERIC_READ, 0, NULL,OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hfile)// to check if the file is created successfully
	{
		printf("create file function failed");
		system("pause");
		return 0;
	}
	while (1)//to read till the end of the file
	{
		ret = ReadFile(hfile, buff, BUFSIZE, &nbytesr, NULL);
		{
			if (ret == 0)
			{
				printf("cannot read");
			}
		}
		if (ret&& nbytesr == 0)
		{
			printf("reached EOF");
			break;
		}
	}
	printf("%S", buff);
	CloseHandle(hfile);
	return 1;
}