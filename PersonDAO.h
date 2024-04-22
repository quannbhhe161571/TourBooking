#ifndef PERSON_DAO_H
#define PERSON_DAO_H
#include "DBContext.h"

class PersonDAO : public DBContext
{
public:
    PersonDAO();
	int checkingPermission(const std::string& username, const std::string& password);
    void changePassword(const std::string& username, const std::string& password);
    void changeDisplayName(const std::string& username, const std::string& displayName);
    void changeAddress(const std::string& username, const std::string& address);
    void changeDob(const std::string& username, const std::string& dob);
    void changeEmail(const std::string& username, const std::string& email);
    void changePhoneNumber(const std::string& username, const std::string& phoneNumber);
};
#endif

