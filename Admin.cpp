#include "Admin.h"

Admin::Admin() {}

Admin::Admin(const std::string& username, const std::string& password, const std::string& displayName,
    const std::string& gender, const std::string& address,
    const std::string& dob, const std::string& email,
    const std::string& phoneNumber, const std::string& role) :
    Person(username, password, displayName, gender, address, dob, email, phoneNumber, role) {}

Admin::Admin(const Admin& other) : Person(other.m_username, other.m_password, other.m_displayName, other.m_gender, other.m_address, other.m_dob, other.m_email, other.m_phoneNumber, other.m_role) {}

bool Admin::changePassword(const std::string& oldPassword, const std::string& newPassword)
{
    if (oldPassword != m_password)
    {
        return false;
    }
    m_password = newPassword;
    PersonDAO* personDao = new PersonDAO();
    personDao->changePassword(m_username, newPassword);
    delete personDao;
    return true;
}

bool Admin::changeDisplayName(const std::string& displayName)
{
    m_displayName = displayName;
    PersonDAO* personDao = new PersonDAO();
    personDao->changeDisplayName(m_username, displayName);
    delete personDao;
    return true;
}

bool Admin::changeAddress(const std::string& address)
{
    m_address = address;
    PersonDAO* personDao = new PersonDAO();
    personDao->changeAddress(m_username, address);
    delete personDao;
    return true;
};

bool Admin::changeDob(const std::string& dob)
{
    m_dob = dob;
    PersonDAO* personDao = new PersonDAO();
    personDao->changeDob(m_username, dob);
    delete personDao;
    return true;
}

bool Admin::changeEmail(const std::string& email)
{
    m_email = email;
    PersonDAO* personDao = new PersonDAO();
    personDao->changeEmail(m_username, email);
    delete personDao;
    return true;
}

bool Admin::changePhoneNumber(const std::string& phoneNumber)
{
    m_phoneNumber = phoneNumber;
    PersonDAO* personDao = new PersonDAO();
    personDao->changePhoneNumber(m_username, phoneNumber);
    delete personDao;
    return true;
}

void Admin::displayAdminInformation() {
    std::cout << "Username\t: " << m_username << std::endl;
    std::cout << "Password\t: " << m_password << std::endl;
    std::cout << "Display Name\t: " << m_displayName << std::endl;
    std::cout << "Gender\t\t: " << m_gender << std::endl;
    std::cout << "Address\t\t: " << m_address << std::endl;
    std::cout << "D.O.B\t\t: " << m_dob << std::endl;
    std::cout << "Email\t\t: " << m_email << std::endl;
    std::cout << "Phone Number\t: " << m_phoneNumber << std::endl;
    std::cout << "Role\t\t: " << m_role << std::endl;
}