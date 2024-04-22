#ifndef ADMIN_CONTROLLER_H
#define ADMIN_CONTROLLER_H
#include "AdminView.h"
#include "AdminChangeInfoController.h"
class AdminController
{
private:
	Admin* admin = nullptr;
public:
	AdminController(Admin* admin);
	void MainNavigation();
};
#endif

