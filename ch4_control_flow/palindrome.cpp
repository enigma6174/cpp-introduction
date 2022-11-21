#include <iostream>

using namespace std;

int main() {

    int number {},
        current_number {},
        reverse {},
        remainder {};

    cout << "number > ";
    cin >> number;

    current_number = number;

    // algorithm to generate reverse of a number
    while (current_number != 0) {
        remainder = current_number % 10;
        current_number = current_number / 10;
        reverse = reverse * 10 + remainder;
    }

    if (reverse == number)
        cout << "palindrome!" << endl;
    else
        cout << "not a palindrome!" << endl;

    cout << "reverse of " << number << " is " << reverse << endl;
    
    return 0;
}