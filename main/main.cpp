#include <iostream>
#include "../Objects/User.h"

int main() {
    int menu{0};
    int x{0};
    while (x < 2) {
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
            cout << "Find " << endl;
        } else if (menu == 4) {
            cout << "Change " << endl;
        } else if (menu == 5) {
            cout << "Exiting the program..." << endl;
            break;
        }
        x++;
    }
}
