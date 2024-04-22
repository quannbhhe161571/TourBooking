#include "HomeController.h"

void HomeController::MainNavigation() {
    while (true) {
        system("cls");
        int choice = HomeView::HomeMenuScreen();
        switch (choice)
        {
        case 0:
            return;
        case 1:
        {
            while (true)
            {
                LoginInformation loginInformation = HomeView::Option_Login();
                PersonDAO* personDao = new PersonDAO();
                if (personDao->checkingPermission(loginInformation.username, loginInformation.password) == 0) {
                    Session* session = new Session();
                    Admin* admin = session->sessionAdmin(loginInformation.username);
                    AdminController* adminController = new AdminController(admin);
                    adminController->MainNavigation();
                    delete adminController;
                    delete admin;
                    delete session;
                    break;
                }
                else if (personDao->checkingPermission(loginInformation.username, loginInformation.password) == 1) {
                    Session* session = new Session();
                    User* user = session->sessionUser(loginInformation.username);
                    UserController* userController = new UserController(user);
                    userController->MainNavigation();
                    delete userController;
                    delete user;
                    delete session;
                    break;
                }
                else {
                    std::cout << "Login failed! Wrong username or password." << std::endl;
                    system("pause");
                    break;
                }
                delete personDao;
            }
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
    }
}