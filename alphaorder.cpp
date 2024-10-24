//
// Created by Anthony Fonseca on 10/23/24.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name1[25], name2[25];

    cout << "Please input the first name in format 'last, first':" << endl;

    cin.getline(name1, 24);

    cout << "Please input the second name in format 'last, first':" << endl;

    cin.getline(name2, 24);

    cout << endl << "The names in alphabetical order are as follows:" << endl;

    if (strcmp(name1, name2) > 0)
        cout << name2 << endl << name1 << endl;
    else if (strcmp(name1, name2) == 0)
        cout << name1 << endl << name2 << endl << "The names are the same" << endl;
    else
        cout << name1 << endl << name2 << endl;

    return 0;
}