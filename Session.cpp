#include "Session.h"

Admin* Session::sessionAdmin(const std::string& username) {
    json data = DBContext::readData("User.json");
    Admin* admin = nullptr;
    for (auto& d : data)
    {
        if (d["username"] == username)
        {
            admin = new Admin(d["username"], d["password"], d["displayName"], d["gender"], d["address"], d["dob"], d["email"], d["phoneNumber"], d["role"]);
            break;
        }
    }
    return admin;
}

User* Session::sessionUser(const std::string& username) {
    json data = DBContext::readData("User.json");
    User* user = nullptr;
    for (auto& d : data)
    {
        if (d["username"] == username)
        {
            user = new User(d["username"], d["password"], d["displayName"], d["gender"], d["address"], d["dob"], d["email"], d["phoneNumber"], d["role"]);
            break;
        }
    }
    return user;
}