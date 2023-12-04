#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include <urlmon.h>
#pragma comment(lib,"urlmon.lib")
#pragma comment(lib,"wininet.lib")

int main()
{
	std::cout << "-----------------------------------------------------\n";
	std::cout << "Welcome to ALEEXSZN HWID RANDOMIZER:\n";
	std::cout << "-----------------------------------------------------\n";
	std::cout << "Press any key to start\n";
	std::cout << "-----------------------------------------------------\n";
		system("pause");

	HRESULT hr;
	PCTSTR Exe = _T("EXE LINK HERE"), FileP1 = _T("FILE PATH");
	LPCTSTR Sys = _T("SYS LINK HERE"), FileP2 = _T("FILE PATH");
	hr = URLDownloadToFile(0, Exe, FileP1, 0, 0);
	hr = URLDownloadToFile(0, Sys, FileP2, 0, 0);
	
	std::cout << "-----------------------------------------------------\n";
	std::cout << "Successfully Randomized HWID\n";
	std::cout << "-----------------------------------------------------\n";
	std::cout << "                                                            \n";
	std::cout << "                                                            \n";
		system("pause");
	std::cout << "                                                            \n";
	std::cout << "                                                            \n";
	std::cout << "                                                            \n";
	std::cout << "                                                            \n";
	std::cout << "                                                            \n";
	std::cout << "-----------------------------------------------------\n";
	std::cout << "New HWID DATA \n";
	std::cout << "-----------------------------------------------------\n";

	std::cout << "-----------------------------------------------------\n";
	std::cout << "Disk Model\n";
	std::cout << "-----------------------------------------------------\n";
	std::cout << "                                                            \n";
		system("wmic diskdrive get model");
	std::cout << "                                                            \n";
	std::cout << "-----------------------------------------------------\n";
	std::cout << "Disk Serial Number\n";
	std::cout << "-----------------------------------------------------\n";
	std::cout << "                                                            \n";
		system("wmic diskdrive get serialnumber");
	std::cout << "                                                            \n";
	std::cout << "                                                            \n";
		system("pause");
	std::cout << "                                                            \n";
	std::cout << "                                                            \n";
	std::cout << "-----------------------------------------------------\n";
	std::cout << "Successfully Randomized HWID\n";
	std::cout << "-----------------------------------------------------\n";
	std::cout << "                                                            \n";
	std::cout << "                                                            \n";
		system("pause");
	std::cout << "                                                            \n";
	std::cout << "                                                            \n";
}