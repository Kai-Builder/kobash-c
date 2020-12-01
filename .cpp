#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    char acUserName[100];
    DWORD nUserName = sizeof(acUserName);
    if (GetUserName(acUserName, &nUserName)) {
        cout << "User name is " << acUserName << "." << endl;
        cin.get();
    }
    return 0;
}