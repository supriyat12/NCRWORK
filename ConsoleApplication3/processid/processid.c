
#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
int main(int argc, LPCSTR argv[])
{
	BOOL ret;
	PROCESS_INFORMATION pi;
	STARTUPINFO si;
	
	si.cb = sizeof(si);
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));

	// main thread

	ret = CreateProcessA(NULL, argv[1], NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

	// child thread


	if (ret == 0)
	{
		printf("%d\n", GetLastError());
		system("pause");
		return -1;
	}
	printf("id of thE process%d",GetProcessId(pi.hProcess));
	printf("id of the current thread %d", GetCurrentThreadId());
	printf("process id of thread %d", GetProcessIdOfThread(pi.hThread));
	printf("thread if of the thread %d", GetThreadId(pi.hThread));

	system("pause");
	return 0;
}