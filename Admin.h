#ifndef ADMIN_H
#define ADMIN_H
#include "Person.h"
#include "PersonDAO.h"
#include "Helper.h"

class Admin : public Person
{
public:
    Admin();

    Admin(const std::string& username, const std::string& password, const std::string& displayName, 
        const std::string& gender, const std::string& address,
        const std::string& dob, const std::string& email,
        const std::string& phoneNumber, const std::string& role);

    Admin(const Admin& other);

    bool changePassword(const std::string& oldPassword, const std::string& newPassword) override;

    bool changeDisplayName(const std::string& displayName) override;

    bool changeAddress(const std::string& address) override;

    bool changeDob(const std::string& dob) override;

    bool changeEmail(const std::string& email) override;

    bool changePhoneNumber(const std::string& phoneNumber) override;

    void displayAdminInformation();

    ~Admin() {};
};

#endif

