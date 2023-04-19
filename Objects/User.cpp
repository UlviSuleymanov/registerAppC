#include <vector>
#include "User.h"

std::vector<User> users{};

User::User(const string &name, const string &surname, int age) : name(name), surname(surname), age(age) {}

const string &User::getName() const {
    return name;
}

void User::setName(const string &name) {
    User::name = name;
}

const string &User::getSurname() const {
    return surname;
}

void User::setSurname(const string &surname) {
    User::surname = surname;
}

int User::getAge() const {
    return age;
}

void User::setAge(int age) {
    User::age = age;
}

void registerUser() {
    int count = giveNumber("How many User do you want to register");
    for (int i = 0; i < count; i++) {
        cout << (i + 1) << ". User Register" << endl;
        users.push_back(fillUser());
    }
    cout << "Register is completed." << endl;
    printUser();
}

User fillUser() {
    string name = giveText("Enter name");
    string surname = giveText("Enter surname");
    int age = giveNumber("Enter age");
    User user = *new User(name, surname, age);
    return user;
}

void printUser() {
    if (users.empty()) {
        return;
    }
    for (int i = 0; i < users.size(); i++) {
        User user = users[i];
        cout << user.getName() << " " << user.getSurname() << " " << user.getAge() << endl;
    }
}

void findUserAndPrint() {
    string text = giveText("Please enter search query");
    std::vector<User> result = findUser(text);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i].getName() << " " << result[i].getSurname() << " " << result[i].getAge() << endl;
    }
}


std::vector<User> findUser(string text) {
    std::vector<User> result{};
    for (int i = 0; i < users.size(); i++) {
        User user = users[i];
        if (user.getName().find(text) != string::npos || user.getSurname().find(text) != string::npos) {
            result.push_back(user);
        }
    }
    return result;
}

void changeUser() {
    printUser();
    int i = giveNumber("Which user you want to change?");
    cout << "Please enter new data" << endl;
    User user = fillUser();
    users[i - 1] = user;
}