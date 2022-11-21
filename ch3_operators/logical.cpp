#include <iostream>

using namespace std;

int main() {

    int number {};

    cout << "Enter Number: ";
    cin >> number;

    cout << boolalpha;
    cout << number << " is multiple of 6 ? " << (number % 3 == 0 && number % 2 == 0) << endl;
    cout << number << " is a two digit number ? " << (number > 9 && number < 100) << endl;

    return 0;
}