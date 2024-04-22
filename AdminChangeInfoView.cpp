#include "AdminChangeInfoView.h"

AdminChangeInfoView::AdminChangeInfoView(Admin* admin) : admin(admin) {}
int AdminChangeInfoView::AdminChangeInfoMenuScreen() {
    int choice;
    while (true)
    {
        std::cout << "========================= + VIETRAVEL TOUR BOOKING SYSTEM ADMIN MODE + =========================" << std::endl;
        std::cout << "------------------------------------ + CHANGE INFORMATION + ------------------------------------" << std::endl;
        admin->displayAdminInformation();
        std::cout << "---------------------------------- + CHOOSE FIELD TO CHANGE + ----------------------------------" << std::endl;
        std::cout << "1. Change Password" << std::endl;
        std::cout << "2. Change Display Name" << std::endl;
        std::cout << "3. Change Address" << std::endl;
        std::cout << "4. Change D.O.B" << std::endl;
        std::cout << "5. Change Email" << std::endl;
        std::cout << "6. Change Phone Number" << std::endl;
        std::cout << "0. Backpage" << std::endl;
        std::cout << "========================================== + + + + + ===========================================" << std::endl;
        std::cout << "My choice is: ";
        if (!(std::cin >> choice) || choice < 0 || choice > 6)
        {
            std::cout << "Invalid choice. Please enter a number between 0 and 6." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            system("pause");
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        system("cls");
    }
    return choice;
}

