#include <iostream>
#include "../Objects/User.h"
#include "../Objects/Admin.h"

int main() {
    int menu{0};
    if (isLogined == false) {
        checkLogined();
    }
    while (true) {
        menu = giveNumber("What do you want to do"
                          "\n 1.Register a new User."
                          "\n 2.Show all user."
                          "\n 3.Find User."
                          "\n 4.Change User."
                          "\n 5.Exit Program.");
        if (menu == 1) {
            registerUser();
        } else if (menu == 2) {
            printUser();
        } else if (menu == 3) {
            findUserAndPrint();
        } else if (menu == 4) {
            changeUser();
        } else if (menu == 5) {
            cout << "Exiting the program..." << endl;
            isLogined = false;
            break;
        }
    }


}
