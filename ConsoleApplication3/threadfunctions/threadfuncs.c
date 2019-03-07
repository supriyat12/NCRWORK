#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
DWORD WINAPI thread_func()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("i=%d", i);
		Sleep(1000);
		getchar();
	}
}
int main(int argc, LPCSTR argv[])
{
	HANDLE hthread;
	LPDWORD thID2;
	hthread = CreateThread(NULL, 0, thread_func(), NULL, 0, &thID2);
	if (hthread == NULL)
	{
		_tprintf(_T("thread craetion failed"));
		return -1;
	}
	//WaitForSingleObject(hthread, 1000);
	ExitThread(0);

	return  0;
}