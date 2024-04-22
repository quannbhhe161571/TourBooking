#ifndef USER_CONTROLLER_H
#define USER_CONTROLLER_H
#include "UserView.h"
#include "UserChangeInfoController.h"

class UserController
{
private:
	User* user = nullptr;
public:
	UserController(User* user);
	void MainNavigation();
};

#endif
