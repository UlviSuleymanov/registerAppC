//
// Created by Ulvi on 19.04.2023.
//

#ifndef CONSTRUCTORS_ADMIN_H
#define CONSTRUCTORS_ADMIN_H

#include <iostream>
#include "../util/Util.h"

using std::string, std::cout, std::endl, std::cin;

class Admin {
private:
    string name;
    string surname;
    string email;
    string password;
public:
    Admin();

    Admin(const string &name, const string &surname, const string &email, const string &password);

    const string &getName() const;

    void setName(const string &name);

    const string &getSurname() const;

    void setSurname(const string &surname);

    const string &getEmail() const;

    void setEmail(const string &email);

    const string &getPassword() const;

    void setPassword(const string &password);
};

void checkLogined();

static bool isLogined = false;

#endif //CONSTRUCTORS_ADMIN_H
