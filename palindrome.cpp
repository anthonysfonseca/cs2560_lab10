//
// Created by Anthony Fonseca on 10/23/24.
//

#include <iostream>
using namespace std;

int main() {
    char str[51];

    cout << "Enter a string: ";
    cin.getline(str, 50);

    int length = strlen(str);
    int j = length - 1;
    for (int i = 0; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[j])) {
            cout << str << " is not a palindrome" << endl;
            return 0;
        } else {
            j--;
        }
    }

    cout << str << " is a palindrome" << endl;

    return 0;
}