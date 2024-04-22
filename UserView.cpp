#include "UserView.h"

UserView::UserView(User* user) : user(user) {}

int UserView::UserMenuScreen() {
    int choice;
    while (true)
    {
        std::cout << "Welcome, " << user->getDisplayName() << std::endl;
        std::cout << "Thank you for trusting Vietravel's products" << std::endl;
        std::cout << std::endl;
        std::cout << "========================= + VIETRAVEL TOUR BOOKING SYSTEM CUSTOMER MODE + =========================" << std::endl;
        std::cout << "1. Change Information" << std::endl;
        std::cout << "2. Book a Tour" << std::endl;
        std::cout << "3. Manage Tours Booking Before" << std::endl;
        std::cout << "4. Find a Tour" << std::endl;
        std::cout << "5. Destination Information" << std::endl;
        std::cout << "6. Manage Payment Methods" << std::endl;
        std::cout << "0. Logout" << std::endl;
        std::cout << "========================================== + + + + + ==============================================" << std::endl;
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