//
// Created by Anthony Fonseca on 10/23/24.
//

#include <iostream>
using namespace std;

int main() {
    char last[10];

    cout << "Please enter your last name using no more than 9 characters:" << endl;
    cin.getline(last, 9);

    cout << "Name entered: " << last << endl;

    return 0;
}