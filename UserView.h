#ifndef USERVIEW_H
#define USERVIEW_H
#include "User.h"
class UserView
{
private:
	User* user = nullptr;
public:
	UserView(User* user);
	int UserMenuScreen();
};

#endif

