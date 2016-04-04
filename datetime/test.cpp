/*
Testing class based heavily on code found in testdate.cpp by Clinton Fookes

Created on 04/04/16
Author WADE JENSEN
n9154701

*/

#ifndef _IOSTREAM
#define _IOSTREAM
#include <iostream>
using std::cerr;
using std::endl;
#endif

// ANSI colour codes
//   These strings are interpreted by the terminal as a change colour command
const char* DEFAULT = "\033[0m";
const char* GREEN = "\033[32m";
const char* RED = "\033[31m";
const char* YELLOW = "\033[33m";

class Test
{
public:
	//public test properties
	// Displays PASS or FAIL given true or false
	bool Test::dispPass(bool pass)
	{
		if (pass) cout << GREEN << "PASS" << DEFAULT << endl;
		else      cout << RED << "FAIL" << DEFAULT << endl;
		return pass;
	}

	// Displays PASS or FAIL given true or false
	bool Test::dispPass(bool pass)
	{
		if (pass) cout << GREEN << "PASS" << DEFAULT << endl;
		else      cout << RED << "FAIL" << DEFAULT << endl;
		return pass;
	}

	//public test methods

private:
	//private test properties

	//public test methods
}