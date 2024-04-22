#ifndef ADMINCHANGEINFOVIEW_H
#define ADMINCHANGEINFOVIEW_H
#include "Admin.h"
class AdminChangeInfoView
{
private:
	Admin* admin = nullptr;
public:
	AdminChangeInfoView(Admin *admin);
	int AdminChangeInfoMenuScreen();
};
#endif

