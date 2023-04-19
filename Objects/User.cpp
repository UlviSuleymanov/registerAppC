//
// Created by Ulvi on 17.04.2023.
//

#include "User.h"
//big data aleminin numuneleridir.

std::vector<User> users{};

User::User() {}

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
    User *user = new User(name, surname, age);
    return *user;
}

void printUser() {
    if (users.empty()) {
        return;
    }
    for (int i = 0; i < users.size(); i++) {
        User user = users[i];
        cout << (i + 1) << ". " << user.getName() << " " << user.getSurname() << " " << user.getAge() << endl;
    }
}

void findUserAndPrint() {
    string query = giveText("Please enter query");
    std::vector<User> result = findUser(query);
    if (result.empty()) {
        cout << "No such person exsist" << endl;
        string answer = giveText("Do you want to search new query? please answer yes or no");
        if (answer == "yes") {
            findUserAndPrint();
        }
        if (answer == "no") {
            exit(0);
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << (i + 1) << ". " << result[i].getName() << " " << result[i].getSurname() << " " << result[i].getAge()
             << endl;
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
    int answer = giveNumber("Which user do you want to change?");
    User user = fillUser();
    users[answer - 1] = user;
}