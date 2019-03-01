#include<Windows.h>
#include<stdio.h>
#include<string.h>
int main(int argc, TCHAR *argv[], TCHAR *env[])
{
	int i;
	CommandLineToArgvW(GetCommandLineW(), 4);
	for (i = 0; i < 4; i++)
	{
		printf("%s", argv[i]);
	}
}