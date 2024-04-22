#ifndef USER_CHANGEINFO_CONTROLLER_H
#define USER_CHANGEINFO_CONTROLLER_H
#include "UserChangeInfoView.h"
class UserChangeInfoController
{
private:
	User* user = nullptr;
public:
	UserChangeInfoController(User* user);
	void MainNavigation();
	void ChangePasswordNavigation();
	void ChangeDisplayNameNavigation();
	void ChangeDobNavigation();
	void ChangeAddressNavigation();
	void ChangeEmailNavigation();
	void ChangePhoneNumberNavigation();
};

#endif

