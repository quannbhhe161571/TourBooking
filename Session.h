#ifndef SESSION_H
#define SESSION_H
#include "Admin.h"
#include "User.h"

class Session
{
public:
	Admin* sessionAdmin(const std::string& username);
	User* sessionUser(const std::string& username);
};
#endif

