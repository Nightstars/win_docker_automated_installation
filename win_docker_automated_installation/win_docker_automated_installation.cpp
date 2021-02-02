#include <Windows.h>

int main()
{
	typedef int(*FUNC)();
	HINSTANCE hDllInst;
	hDllInst = LoadLibrary(L"commander.dll");
	FUNC autoInstall = (FUNC)GetProcAddress(hDllInst, "autoInstall");
	int stat = autoInstall();
	FreeLibrary(hDllInst);
    return 0;
}
