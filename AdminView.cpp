#include "AdminView.h"

AdminView::AdminView(Admin* admin) : admin(admin){}

int AdminView::AdminMenuScreen() {
    int choice;
    while (true)
    {
        std::cout << "Welcome, " << admin->getDisplayName() << std::endl;
        std::cout << "You are in Admin mode" << std::endl;
        std::cout << std::endl;
        std::cout << "========================= + VIETRAVEL TOUR BOOKING SYSTEM ADMIN MODE + =========================" << std::endl;
        std::cout << "1. Change Information" << std::endl;
        std::cout << "2. Manage Booking of Customer" << std::endl;
        std::cout << "3. Manage Tours of Company" << std::endl;
        std::cout << "4. Manage Vehicles of Company" << std::endl;
        std::cout << "5. Manage Hotels of Company" << std::endl;
        std::cout << "6. Banking, Payment and Accountance" << std::endl;
        std::cout << "0. Logout" << std::endl;
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
