#include "Person.h"

Person::Person() {}

Person::Person(const std::string& username, const std::string& password, 
                const std::string& displayName, const std::string gender,
                const std::string& address, const std::string& dob, 
                const std::string& email, const std::string& phoneNumber, 
                const std::string& role)
                : m_username(username), m_password(password), m_displayName(displayName), 
                m_gender(gender), m_address(address), m_dob(dob), 
                m_email(email), m_phoneNumber(phoneNumber), m_role(role) {}

Person::Person(const Person& other) : m_username(other.m_username), m_password(other.m_password), 
                                    m_displayName(other.m_displayName), m_gender(other.m_gender), 
                                    m_address(other.m_address), m_dob(other.m_dob),
                                    m_email(other.m_email), m_phoneNumber(other.m_phoneNumber), 
                                    m_role(other.m_role) {}

void Person::setUsername(const std::string& username)
{
    m_username = username;
}

std::string Person::getUsername() const
{
    return m_username;
}

void Person::setPassword(const std::string& password)
{
    m_password = password;
}

std::string Person::getPassword() const
{
    return m_password;
}

void Person::setDisplayName(const std::string& displayName)
{
    m_displayName = displayName;
}

std::string Person::getDisplayName() const
{
    return m_displayName;
}

void Person::setGender(const std::string& gender)
{
    m_gender = gender;
}

std::string Person::getGender() const
{
    return m_gender;
}

void Person::setAddress(const std::string& address)
{
    m_address = address;
}

std::string Person::getAddress() const
{
    return m_address;
}

void Person::setDob(const std::string& dob)
{
    m_dob = dob;
}

std::string Person::getDob() const
{
    return m_dob;
}

void Person::setEmail(const std::string& email)
{
    m_email = email;
}

std::string Person::getEmail() const
{
    return m_email;
}

void Person::setPhoneNumber(const std::string& phoneNumber)
{
    m_phoneNumber = phoneNumber;
}

std::string Person::getPhoneNumber() const
{
    return m_phoneNumber;
}

void Person::setRole(const std::string& role)
{
    m_role = role;
}

std::string Person::getRole() const
{
    return m_role;
}