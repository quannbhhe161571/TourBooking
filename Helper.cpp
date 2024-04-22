#include "Helper.h"

bool Helper::checkPassword(const std::string& password) {
    if (password.length() < 8)
        return false;
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;
    for (char ch : password) {
        if (std::isupper(ch))
            hasUpperCase = true;
        else if (std::islower(ch))
            hasLowerCase = true;
        else if (std::isdigit(ch))
            hasDigit = true;
        else if (!std::isalnum(ch))
            hasSpecialChar = true;
    }
    return (hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar);
}


bool Helper::isValidPhoneNumber(const std::string& phoneNumber) {
    std::regex pattern("^0\\d{9}$");
    return std::regex_match(phoneNumber, pattern);
}

bool Helper::isValidEmail(const std::string& email) {
    std::regex pattern("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    return std::regex_match(email, pattern);
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool Helper::isValidDateFormat(const std::string& dateStr) {
    std::regex pattern("\\b(0?[1-9]|[12][0-9]|3[01])/(0?[1-9]|1[0-2])/((19|20)\\d\\d)\\b");
    if (!std::regex_match(dateStr, pattern)) {
        return false;
    }

    int day, month, year;
    if (sscanf_s(dateStr.c_str(), "%d/%d/%d", &day, &month, &year) != 3) {
        return false;
    }

    if (month < 1 || month > 12 || day < 1) {
        return false;
    }

    bool isLeap = isLeapYear(year);
    int maxDaysInMonth;
    switch (month) {
    case 2:
        maxDaysInMonth = (isLeap) ? 29 : 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        maxDaysInMonth = 30;
        break;
    default:
        maxDaysInMonth = 31;
    }

    return day <= maxDaysInMonth;
}

int Helper::convertDateStringToInt(const std::string& dateStr) {
    int year, month, day;
    char slash;
    std::stringstream ss(dateStr);
    ss >> day >> slash >> month >> slash >> year;
    return year * 10000 + month * 100 + day;
}


std::string Helper::formatDateString(const std::string& dateStr) {
    std::istringstream ss(dateStr);
    int day, month, year;
    char delim;
    if (!(ss >> day >> delim >> month >> delim >> year)) {
        return "Invalid Date";
    }
    std::ostringstream formattedDate;
    formattedDate << std::setw(2) << std::setfill('0') << day << '/';
    formattedDate << std::setw(2) << std::setfill('0') << month << '/';
    formattedDate << year;
    return formattedDate.str();
}

std::string Helper::getCurrentDateAsString() {
    time_t Time = time(NULL);
    tm Now;
    localtime_s(&Now, &Time);
    std::stringstream ss;
    ss << Now.tm_mday << "/" << Now.tm_mon + 1 << "/" << Now.tm_year + 1900;
    std::string formattedDate = ss.str();
    return formattedDate;
}
