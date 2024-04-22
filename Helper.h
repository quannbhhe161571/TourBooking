#ifndef HELPER_H
#define HELPER_H
#include "Header.h"
class Helper
{
public:
	static bool checkPassword(const std::string& password);
	static bool isValidPhoneNumber(const std::string& phoneNumber);
	static bool isValidEmail(const std::string& email);
	static bool isValidDateFormat(const std::string& dateStr);
	static int convertDateStringToInt(const std::string& dateStr);
	static std::string formatDateString(const std::string& dateStr);
	static std::string getCurrentDateAsString();
};

#endif