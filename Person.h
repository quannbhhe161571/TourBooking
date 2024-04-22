#ifndef PERSON_H
#define PERSON_H
#include "Header.h"

class Person
{
protected:
	std::string m_username;
	std::string m_password;
	std::string m_displayName;
	std::string m_gender;
	std::string m_address;
	std::string m_dob;
	std::string m_email;
	std::string m_phoneNumber;
	std::string m_role;
public:
	Person();

	Person(const std::string& username, const std::string& password, const std::string& displayName, const std::string gender,
		const std::string& address, const std::string& dob, const std::string& email, const std::string& phoneNumber, const std::string& role);

	Person(const Person& other);

    void setUsername(const std::string& username);
    std::string getUsername() const;

    void setPassword(const std::string& password);
    std::string getPassword() const;

    void setDisplayName(const std::string& displayName);
    std::string getDisplayName() const;

    void setGender(const std::string& gender);
    std::string getGender() const;

    void setAddress(const std::string& address);
    std::string getAddress() const;

    void setDob(const std::string& dob);
    std::string getDob() const;

    void setEmail(const std::string& email);
    std::string getEmail() const;

    void setPhoneNumber(const std::string& phoneNumber);
    std::string getPhoneNumber() const;

    void setRole(const std::string& role);
    std::string getRole() const;

    virtual bool changePassword(const std::string& oldPassword, const std::string& newPassword) = 0;

    virtual bool changeDisplayName(const std::string& displayName) = 0;

    virtual bool changeAddress(const std::string& address) = 0;

    virtual bool changeDob(const std::string& dob) = 0;

    virtual bool changeEmail(const std::string& email) = 0;

    virtual bool changePhoneNumber(const std::string& phoneNumber) = 0;

    virtual ~Person() {};
};

#endif

