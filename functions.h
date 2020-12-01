#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include "Libs.h"
using namespace std;

void OnHelpCommandDo1orbasic() {
	int max;
	max = 10;
	srand(time(0));
	std::cout << "HELP PAGE 1\n";
	cout << "help <int> -- Help Page Based On Integer. (1-5)\n";
	cout << "csudok <mod> -- Installs Module Based On User.\n";
	cout << "csudok help -- csudok Help menu.\n";
	cout << "start csudok -- Starts Csudok.\n";
	cout << "sudok help -- Sudok Module With Less Support For C++. Made For Python scripting.\n";
	cout << "sudok commands -- sudok Commands\n";
	cout << "Help_Page_1 Process Ended With Exit Code " << rand() % max << "\n";
}
CyGo o;
sudok e;
void onHelp2() {
	int max;
	max = 10;
	srand(time(0));
	cout << "Help Page 2\n";
	cout << "installed <type>\n";
	cout << "-========/Built In Libraries\=======-\n";
	cout << "Cygo -- " << o.Cygo_Display << "\n";
	cout << "sudok --" << e.sudok_Display << "\n";
}



void Require(string file, string dothis)
{
	ifstream ifl;
	ifl.open(file);
	if (ifl) {
		dothis;
	}
}