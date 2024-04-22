#ifndef ADMINVIEW_H
#define ADMINVIEW_H
#include "Admin.h"
class AdminView
{
private:
	Admin* admin = nullptr;
public:
	AdminView(Admin* admin);
	int AdminMenuScreen();
};
#endif
