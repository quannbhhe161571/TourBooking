#ifndef ADMIN_CHANGEINFO_CONTROLLER_H
#define ADMIN_CHANGEINFO_CONTROLLER_H
#include "AdminChangeInfoView.h"
class AdminChangeInfoController
{
private:
	Admin* admin = nullptr;
public:
	AdminChangeInfoController(Admin* admin);
	void MainNavigation();
	void ChangePasswordNavigation();
	void ChangeDisplayNameNavigation();
	void ChangeDobNavigation();
	void ChangeAddressNavigation();
	void ChangeEmailNavigation();
	void ChangePhoneNumberNavigation();
};
#endif

