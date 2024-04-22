#include "HomeView.h"

int HomeView::HomeMenuScreen() {
    int choice;
    while (true)
    {
        std::cout << "========================= + VIETRAVEL TOUR BOOKING SYSTEM + =========================" << std::endl;
        std::cout << "1. Login" << std::endl;
        std::cout << "2. Signup" << std::endl;
        std::cout << "3. All our tours" << std::endl;
        std::cout << "4. About us" << std::endl;
        std::cout << "5. News" << std::endl;
        std::cout << "6. Contact" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "===================================== + + + + + ======================================" << std::endl;
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

LoginInformation HomeView::Option_Login()
{
    system("cls");
    std::cout << "========================= + VIETRAVEL TOUR BOOKING SYSTEM + =========================" << std::endl;
    std::cout << "===================================== + LOGIN + =====================================" << std::endl;
    LoginInformation loginInformation;
    std::cout << "Username: ";
    std::getline(std::cin, loginInformation.username);
    std::cout << "Password: ";
    std::getline(std::cin, loginInformation.password);
    return loginInformation;

}