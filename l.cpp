#include "commands.h"
#include "functions.h"
#include "scripting.h"
#include <iostream>
#include <string>
#include <direct.h>
#include <fstream>
#include "Libs.h"
#include "ErrorTypes.h"
#include <iostream>
#include<conio.h>
#include<dos.h>

#define GetCurrentDir _getcwd
Errors raise;
CyGo cygolib;
sudok sudoklib;
using namespace std;
#include <iostream>
#include <windows.h>
using namespace std;
	
	
std::string get_current_dir() {
	char buff[FILENAME_MAX]; //create string buffer to hold path
	GetCurrentDir(buff, FILENAME_MAX);
	string current_working_dir(buff);
	return current_working_dir;
}
int main()
{
	char acUserName[100];
	DWORD nUserName = sizeof(acUserName);
	if (GetUserName(acUserName, &nUserName)) {
	cout << "SIGNED IN AS " << acUserName << "." << endl;
	cout << "For Help Say; help <int>\n\n";
	while (true)
	{
		int points;
		string command;
		cout << get_current_dir() << "> ~$ .. ";
		getline(cin, command);
		if (command == help1)
		{
			OnHelpCommandDo1orbasic();
		}
		if (command == helpBasic)
		{
			
			OnHelpCommandDo1orbasic();
		}
		if (command == help2)
		{
			
			onHelp2();
		}
		if (command == help2Alt)
		{

			onHelp2();
		}
		if (command == sudokHelp)
		{
			ifstream ifl;
			ifl.open("sudok.ko");
			if (ifl)
			{
				
				cout << "Running Sudok 1.12.2\n";
				cout << "sudok install\nsudok scripts\nsudok exist\nsudok og\n\n(Not as many commands are supported on the c++ Version. Use CyGo Instead!\n";
			}
			else
			{
				
				cout << "You Are Currently Running A Fragment Of Sudok 1.12. For Full Branch Type\n";
				cout << "kobash install sudok_fragment\n\n";
				cout << "sudok install <mod>\n";
				cout << "sudok scripts\n";
				cout << "These aren't all the commands, Do kobash install sudok_fragment to install the";
				cout << "Rest Of it, On top of the base, Or just type kobash install sudok for a fresh ne";
				cout << "w Installation.\n";
			}

		}
		if (command == sudoklib.halfinstall_sudok)
		{

			sudoklib.SUDOK_FRAG_INSTALLER();
		}
		if (command == "")
		{

		}
		if (command == bash) {
			cout << "Using Kobash 1.7.9.\n";
			cout << "DIAGNOSTIC DATA\n\n\n";
			cout << "-------CURRENT SESSION-----\n";
			cout << "cur_currentversion = 1.7.9\n";
			cout << "runningLibs = " << "KOBASHINSTALLER";
		}
	}
	}
}
