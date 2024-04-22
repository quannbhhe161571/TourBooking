#ifndef HOMEVIEW_H
#define HOMEVIEW_H
#include "Header.h"

struct LoginInformation
{
	std::string username;
	std::string password;
};

class HomeView
{
public:
	static int HomeMenuScreen();
	static LoginInformation Option_Login();
	static void Option_Signup();
};

#endif

