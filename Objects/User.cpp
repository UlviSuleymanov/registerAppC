//
// Created by Ulvi on 17.04.2023.
//

#include "User.h"
User *users = new User[0];

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
    User *temp = new User[count];
    for (int i = 0; i < count; i++) {
        cout << (i + 1) << ". User Register" << endl;
        temp[i] = *fillUser();
    }
    users = temp;
    cout << "Register is completed.";
    printUser();
}

User *fillUser() {
    string name = giveText("Enter name");
    string surname = giveText("Enter surname");
    int age = giveNumber("Enter age");
    User *user = new User(name, surname, age);
    return user;
}

void printUser() {
    if (users == 0) {
        return;
    }
    size_t lengthArray = sizeof users / sizeof users[0];

    for (int i = 0; i < lengthArray; i++) {
        User user = users[i];
        cout << user.getName() << " " << user.getSurname() << user.getAge() << endl;
    }
}

User *findUser();

void changeUser();