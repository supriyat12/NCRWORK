
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
	ret = CreateProcessA(NULL, argv[1], NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

	if (ret == 0)
	{
		printf("%d\n", GetLastError());
		system("pause");
		return -1;
	}
	printf("handle of the process %d", pi.hProcess);
	printf("id of the process %d", pi.dwProcessId);
	printf("handle of the process %d", pi.dwThreadId);
	system("pause");
	return 0;
}