//
// Created by Ulvi on 17.04.2023.
//

#ifndef CONSTRUCTORS_USER_H
#define CONSTRUCTORS_USER_H

#include "../util/Util.h"
#include <iostream>
#include <vector>
using std::string, std::cout, std::endl, std::cin;

class User {
private:
    string name;
    string surname;
    int age;
public:
    User();

    User(const string &name, const string &surname, int age);

    const string &getName() const;

    void setName(const string &name);

    const string &getSurname() const;

    void setSurname(const string &surname);

    int getAge() const;

    void setAge(int age);

};

void registerUser();

User fillUser();

void printUser();

std::vector<User> findUser(string text);

void findUserAndPrint();

void changeUser();


#endif //CONSTRUCTORS_USER_H
