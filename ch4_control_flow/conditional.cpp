#include <iostream>

using namespace std;

int main() {
    int number {},
        result {};

    cout << "enter number: ";
    cin >> number;

    result = (number % 2 == 0) ? 1 : 0;

    if (result == 1)
        cout << number << " % 2 == 0 ? " << "true" << endl;
    else 
        cout << number << " % 2 == 0 ? " << "false" << endl; 

    cout << (number * 2) << " % 2 == 0 ? " << (((number * 2) % 2 == 0) ? "even" : "odd") << endl;
    cout << (number * 2 + 1) << " % 2 == 0 ? " << (((number * 2 + 1) % 2 == 0) ? "even" : "odd") << endl;

    return 0;
}