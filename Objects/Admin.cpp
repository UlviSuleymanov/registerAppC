//
// Created by Ulvi on 19.04.2023.
//

#include "Admin.h"



Admin::Admin() {}

Admin::Admin(const string &name, const string &surname,
             const string &email, const string &password)
        : name(name), surname(surname), email(email), password(password) {}

const string &Admin::getName() const {
    return name;
}

void Admin::setName(const string &name) {
    Admin::name = name;
}

const string &Admin::getSurname() const {
    return surname;
}

void Admin::setSurname(const string &surname) {
    Admin::surname = surname;
}

const string &Admin::getEmail() const {
    return email;
}

void Admin::setEmail(const string &email) {
    Admin::email = email;
}

const string &Admin::getPassword() const {
    return password;
}

void Admin::setPassword(const string &password) {
    Admin::password = password;
}

const Admin *admin = new Admin("Ulvi", "Suleymanov", "ulvi@gmail.com", "12345");

void checkLogined() {
    int count{0};
    cout << "Welcome, to use services please log in." << endl;
    string email = giveText("Please enter email address.");
    string password = giveText("Please enter password.");
    if (admin->getEmail().find(email) != string::npos && admin->getPassword().find(password) != string::npos) {
        cout << "Hello, Dear " << admin->getName() << endl;
        isLogined = true;
    } else if (admin->getEmail().find(email) == string::npos || admin->getPassword().find(password) == string::npos) {
        cout << "Email or password is incorrect please enter fields correctly." << endl;
        count++;
        if (count == 3) {
            cout << "You have 3 time entered incorrect data. program is shutting down..." << endl;
            exit(-1);
        }
        checkLogined();
    }
}
