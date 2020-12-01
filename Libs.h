#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
using namespace std;
class CyGo {
public:
	string Cygo_Display = "Cygo is a C Implementation Of PyGo which contains Better Terminal, Extension building and more.\n";
	string Cygo_extras = "CyGo Is also Very Lightweight. Meaning it loads Very quickly\n";
	string Cygo_ReadName = "CyGo Library.\n";
	string Cygo_Details = "Install Command: " + CyGo_InstallCommand;
	string CyGo_CreatorName = "KoBash Inc.\n";
	string CyGo_InstallCommand = "kobash install -extract pygo && cygo";
	void CYGO_INSTALL() {
		cout << "Installing Cygo Library..";
		Sleep(3000);
		cout << "Gathering Required Libraries..";
		Sleep(1000);
		cout << "installing cygo.h . . .";
		Sleep(908);
		ofstream cygo("cygo.kobashRuntime");
		cygo << "PyGo.Scriptable == true;";
		cygo.close();
		cout << "Pygo.h Successfully Created.";
	}
};

class sudok {
public:
	string sudok_Display = "Sudok Is a library Built For Speed, Fun, And Coding. The Main Command is sudok help and sudok is used in the original KoBash Editions.";
	string sudok_extras = "Sudok Also Comes with a Built In Language Which Compiles The original BashScript into Easy Syntax, allowing for easy manipulation.";
	string sudok_install = "kobash install sudoklib";
	string halfinstall_sudok = "kobash install sudok_fragment";
	void SUDOK_FRAG_INSTALLER()
	{
		int max;
		max = 15; //set the upper bound to generate the random number
		srand(time(0));
		cout << "Using ScriptLib 4.54.4. . .\n";
		Sleep(rand() % max);
		cout << "Gathering Epic Library. . .\n";
		Sleep(rand() % max);
		cout << "Polishing. . .";
		Sleep(rand() % max);
		ofstream outfile("sudok-fragment.koRunTime");
		outfile << "Sudok.Scriptable == true;";
		outfile.close();
		cout << "Successfully installed sudok_fragment__-dev_-1.13--_st";
		Sleep(rand() % max);
	}
	void SUDOK_FULL_INSTALLER()
	{
		int max;
		max = 30; //set the upper bound to generate the random number
		srand(time(0));
		cout << "Using ScriptLib 4.54.4. . .\n";
		Sleep(rand() % max);
		cout << "Installing Correct Scripts..\n";
		Sleep(rand() % max);
		cout << "Building Sudok Using kobash...\n";
		Sleep(rand() % max);
		ofstream outfile("sudok.ko");
		outfile << "Sudok.Scriptable == true;";
		outfile.close();
		cout << "Successfully installed Sudok 1.12.2\n";
		Sleep(rand() % max);
	}
};
class BashCommands {

};