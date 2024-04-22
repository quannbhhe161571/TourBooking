#include "AdminController.h"

AdminController::AdminController(Admin* admin) : admin(admin) {}

void AdminController::MainNavigation() {
	while (true) {
		system("cls");
		AdminView* adminView = new AdminView(admin);
		int choice = adminView->AdminMenuScreen();
		switch (choice)
		{
		case 0:
			delete adminView;
			return;
		case 1:
		{
			AdminChangeInfoController* adminChangeInfoController = new AdminChangeInfoController(admin);
			adminChangeInfoController->MainNavigation();
			delete adminChangeInfoController;
			break;
		}
		case 2:
		{
			
		}
		case 3:
		{

		}
		case 4:
		{

		}
		case 5:
		{

		}
		case 6:
		{

		}
		default:
			break;
		}
		delete adminView;
	}
}