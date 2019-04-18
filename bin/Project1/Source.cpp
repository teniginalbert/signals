#include <stdio.h>
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	STARTUPINFO si = { sizeof(si) };
	PROCESS_INFORMATION pi;
	TCHAR czCommandLine[] = "ffmpeg/ffmpeg.exe -help";
	if (CreateProcess(NULL, czCommandLine, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
	{
		std::cout << "Process " << czCommandLine << " successfully created\n";
		std::cout << "Process information " << pi.hProcess << "\n";
	};
	system("PAUSE");
	return 0;
}