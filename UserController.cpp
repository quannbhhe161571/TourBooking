#include "UserController.h"

UserController::UserController(User* user) : user(user) {}

void UserController::MainNavigation() {
	while (true) {
		UserView* userView = new UserView(user);
		system("cls");
		int choice = userView->UserMenuScreen();
		switch (choice)
		{
		case 0:
			return;
		case 1:
		{
			UserChangeInfoController* userChangeInfoController = new UserChangeInfoController(user);
			userChangeInfoController->MainNavigation();
			delete userChangeInfoController;
			break;
		}
		case 2:
			std::cout << "Success" << std::endl;
			system("pause");
			break;
		default:
			break;
		}
	}
}
