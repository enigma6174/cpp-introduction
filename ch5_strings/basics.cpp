#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

    char first_name [20] {};
    char last_name [20] {};
    char full_name [50] {};
    char temp [50] {};
    char complete_name [50] {};

    cout << "enter first name: ";
    cin >> first_name;

    cout << "enter last name: ";
    cin >> last_name;

    cout << "first name is " << first_name << " length of first name " << strlen(first_name) << endl;
    cout << "last name is " << last_name << " length of last name " << strlen(last_name) << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "full name is " << full_name << " length of full name " << strlen(full_name) << endl;

    // clear the buffer
    cin.ignore();

    // correct way to read an entire line of string
    cout << "enter complete name: ";
    cin.getline(complete_name, 50);

    cout << "name: " << complete_name << " length: " << strlen(complete_name) << endl;

    if (strcmp(complete_name, full_name) == 0) {
        cout << "full name and complete name are same!" << endl;
    }
    else {
        cout << "full name and complete name are different!" << endl;
    }

    for (size_t i{0}; i < strlen(full_name); i++) {
        full_name[i] = toupper(full_name[i]);
    }
    cout << "FULL NAME: " << full_name << endl;

    return 0;
}