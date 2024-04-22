#ifndef USERCHANGEINFOVIEW_H
#define USERCHANGEINFOVIEW_H
#include "User.h"
class UserChangeInfoView
{
private:
	User* user = nullptr;
public:
	UserChangeInfoView(User* user);
	int UserChangeInfoMenuScreen();
};

#endif
