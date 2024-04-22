#include "PersonDAO.h"

PersonDAO::PersonDAO() {}

int PersonDAO::checkingPermission(const std::string& username, const std::string& password) {
    json data = DBContext::readData("User.json");
    for (auto& d : data)
    {
        if (d["username"] == username && d["password"] == password && d["role"] == "administrator")
        {
            //if checkingPermission return 0 -> admin
            return 0;
        }
        if (d["username"] == username && d["password"] == password && d["role"] == "user")
        {
            //if checkingPermission return 1 -> user
            return 1;
        }
    }
    //if checkingPermission return -1 -> wrong username or password
    return -1;
}

void PersonDAO::changePassword(const std::string& username, const std::string& password)
{
    json data = readData("User.json");
    for (auto& d : data)
    {
        if (d["username"] == username)
        {
            d["password"] = password;
            break;
        }
    }
    updateData("User.json", data);
}

void PersonDAO::changeDisplayName(const std::string& username, const std::string& displayName)
{
    json data = readData("User.json");
    for (auto& d : data)
    {
        if (d["username"] == username)
        {
            d["displayName"] = displayName;
            break;
        }
    }
    updateData("User.json", data);
}

void PersonDAO::changeAddress(const std::string& username, const std::string& address)
{
    json data = readData("User.json");
    for (auto& d : data)
    {
        if (d["username"] == username)
        {
            d["address"] = address;
            break;
        }
    }
    updateData("User.json", data);
}

void PersonDAO::changeDob(const std::string& username, const std::string& dob)
{
    json data = readData("User.json");
    for (auto& d : data)
    {
        if (d["username"] == username)
        {
            d["dob"] = dob;
            break;
        }
    }
    updateData("User.json", data);
}

void PersonDAO::changeEmail(const std::string& username, const std::string& email)
{
    json data = readData("User.json");
    for (auto& d : data)
    {
        if (d["username"] == username)
        {
            d["email"] = email;
            break;
        }
    }
    updateData("User.json", data);
}

void PersonDAO::changePhoneNumber(const std::string& username, const std::string& phoneNumber)
{
    json data = readData("User.json");
    for (auto& d : data)
    {
        if (d["username"] == username)
        {
            d["phoneNumber"] = phoneNumber;
            break;
        }
    }
    updateData("User.json", data);
}

