#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
DWORD WINAPI thread_func1(int x)
{
	printf("in thread1 %d",x++);
}
int main(int argc, LPCSTR argv[])
{
	int g_x = 0;
	InterlockedExchange(g_x, 1);
	HANDLE hthread,hthread1;
	LPDWORD thID1,thID2;
	hthread = CreateThread(NULL, 0, thread_func1(g_x), NULL,0, &thID1);

	if (hthread == NULL)  //checking the thread creation.
	{
		_tprintf(_T("thread creation failed"));
		return -1;
	}
	hthread1= CreateThread(NULL, 0, thread_func(), NULL, 0, &thID2);

	if (hthread1 == NULL)  //checking the thread creation.
	{
		_tprintf(_T("thread creation failed"));
		return -1;
	}
	return 0;
}