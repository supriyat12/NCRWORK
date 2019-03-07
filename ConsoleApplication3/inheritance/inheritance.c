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
	SECURITY_ATTRIBUTES SA;
	SA.bInheritHandle = TRUE;

	// main thread

	ret = CreateProcessA(NULL, argv[1], NULL, NULL, &SA, 0, NULL, NULL, &si, &pi);

	// child thread
	if (ret == 0)
	{
		_tprintf(_T("process creation failed"));
		return -1;
	}
	_tprintf(_T("handle of the process %d", pi.hProcess));
	_tprintf(_T("process id is %d", pi.dwProcessId));
	_tprintf(_T("handle of the thread %d", pi.hThread));
	system("pause");
	return 0;
}
