#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
int main(int argc,LPCSTR argv[])
{
	HANDLE hthread;
	BOOL ret,ret1;
	PROCESS_INFORMATION pi;
	STARTUPINFO si;
	si.cb = sizeof(si);
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	//printf("%S\n",appname);
	ret = CreateProcessA(NULL, argv[1], NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

if (ret == 0)
{
	printf("%d\n",GetLastError());
	system("pause");
	return -1;
	}
ret1 = CreateProcessA(NULL,argv[2], NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
if (ret1 == 0)
{
	_tprintf(_T("PROCESS CREATION FAILED"));
	return -1;
}
system("pause");
return 0;
}