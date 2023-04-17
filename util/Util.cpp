//
// Created by Ulvi on 17.04.2023.
//

#include "Util.h"

int giveNumber(string text) {
    cout << text << ":" << endl;
    int answer{};
    cin >> answer;
    return answer;
}

string giveText(string text) {
    cout << text << " :" << endl;
    string answer{};
    cin >> answer;
    return answer;
}