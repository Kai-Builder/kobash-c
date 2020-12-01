#pragma once
#include <iostream>


class Errors {
public:
	void CommandNotFoundError()
	{
		std::cout << "The Bash String You Are looking for Does Not Exist\n";
	}
	void ModuleNotFound()
	{
		std::cout << "Can Not Find Any Version That satifies User Definition\n";
	}
};