#include "AdminChangeInfoController.h"

AdminChangeInfoController::AdminChangeInfoController(Admin *admin) : admin(admin) {}

void AdminChangeInfoController::MainNavigation() {
	while (true) {
		system("cls");
		AdminChangeInfoView* adminChangeInfoView = new AdminChangeInfoView(admin);
		int choice = adminChangeInfoView->AdminChangeInfoMenuScreen();
		switch (choice)
		{
		case 0:
			return;
		case 1:
		{
			this->ChangePasswordNavigation();
			system("pause");
			return;
		}
		case 2:
		{
			this->ChangeDisplayNameNavigation();
			system("pause");
			return;
		}
		case 3:
		{
			this->ChangeAddressNavigation();
			system("pause");
			return;
		}
		case 4:
		{
			this->ChangeDobNavigation();
			system("pause");
			return;
		}
		case 5:
		{
			this->ChangeEmailNavigation();
			system("pause");
			return;
		}
		case 6:
		{
			this->ChangePhoneNumberNavigation();
			system("pause");
			return;
		}
		default:
			break;
		}
	}
	system("pause");
}

void AdminChangeInfoController::ChangePasswordNavigation() {
	std::cout << std::endl;
	std::cout << "--- Change password ---" << std::endl;
	std::string oldPassword, newPassword;
	std::cout << "Enter old password: ";
	std::getline(std::cin, oldPassword); 
	std::cout << "Enter new password: ";
	std::getline(std::cin, newPassword);
	if (!Helper::checkPassword(newPassword)) {
		std::cout << "New password incorrect format. Password must have at least 8 characters including uppercase letters, lowercase letters, numbers and special characters." << std::endl;
		return;
	}
	if (!admin->changePassword(oldPassword, newPassword)) {
		std::cout << "Change password failed! Old password incorrect." << std::endl;
		return;
	}
	std::cout << "Change password successfully." << std::endl;
	return;
}

void AdminChangeInfoController::ChangeDisplayNameNavigation() {
	std::cout << std::endl;
	std::cout << "--- Change display name ---" << std::endl;
	std::string newDisplayName;
	std::cout << "Enter new display name (or enter '0' to quit): ";
	std::getline(std::cin, newDisplayName);
	if (newDisplayName == "0") {
		return;
	}
	if (!admin->changeDisplayName(newDisplayName)) {
		std::cout << "Change display name failed." << std::endl;
		return;
	}
	std::cout << "Change display name successfully." << std::endl;
	return;
}

void AdminChangeInfoController::ChangeAddressNavigation() {
	std::cout << std::endl;
	std::cout << "--- Change address ---" << std::endl;
	std::string newAddress;
	std::cout << "Enter new address (or enter '0' to quit): ";
	std::getline(std::cin, newAddress);
	if (newAddress == "0") {
		return;
	}
	if (!admin->changeAddress(newAddress)) {
		std::cout << "Change address failed." << std::endl;
		return;
	}
	std::cout << "Change address successfully." << std::endl;
	return;
}

void AdminChangeInfoController::ChangeDobNavigation() {
	std::cout << std::endl;
	std::cout << "--- Change D.O.B ---" << std::endl;
	std::string newDob;
	std::cout << "Enter new D.O.B (or enter '0' to quit): ";
	std::getline(std::cin, newDob);
	if (newDob == "0") {
		return;
	}
	if (!Helper::isValidDateFormat(newDob)) {
		std::cout << "Change D.O.B failed. Wrong date format" << std::endl;
		return;
	}
	newDob = Helper::formatDateString(newDob);
	if (!(Helper::convertDateStringToInt(Helper::getCurrentDateAsString()) - 160000 >= Helper::convertDateStringToInt(newDob))) {
		std::cout << "Change D.O.B failed. Customer must >= 16 years old." << std::endl;
		return;
	}
	if (!admin->changeDob(newDob)) {
		std::cout << "Change D.O.B failed." << std::endl;
		return;
	}
	std::cout << "Change D.O.B successfully." << std::endl;
	return;
}

void AdminChangeInfoController::ChangeEmailNavigation() {
	std::cout << std::endl;
	std::cout << "--- Change email ---" << std::endl;
	std::string newEmail;
	std::cout << "Enter new email (or enter '0' to quit): ";
	std::getline(std::cin, newEmail);
	if (newEmail == "0") {
		return;
	}
	if (!Helper::isValidEmail(newEmail)) {
		std::cout << "Change email failed. Wrong email format." << std::endl;
		return;
	}
	if (!admin->changeEmail(newEmail)) {
		std::cout << "Change email failed." << std::endl;
		return;
	}
	std::cout << "Change email successfully." << std::endl;
	return;
}

void AdminChangeInfoController::ChangePhoneNumberNavigation() {
	std::cout << std::endl;
	std::cout << "--- Change phone number ---" << std::endl;
	std::string newPhoneNumber;
	std::cout << "Enter new phone number (or enter '0' to quit): ";
	std::getline(std::cin, newPhoneNumber);
	if (newPhoneNumber == "0") {
		return;
	}
	if (!Helper::isValidPhoneNumber(newPhoneNumber)) {
		std::cout << "Change phone number failed. Wrong Vietnam phone number format." << std::endl;
		return;
	}
	if (!admin->changePhoneNumber(newPhoneNumber)) {
		std::cout << "Change phone number failed." << std::endl;
		return;
	}
	std::cout << "Change phone number successfully." << std::endl;
	return;
}