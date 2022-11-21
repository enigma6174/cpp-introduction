#include <iostream>

using namespace std;

int main() {
    
    int number {};

    cout << "enter number: ";
    cin >> number;

    if (number % 2 == 0) {
        // this variable is accessible only in this scope
        int converted_odd {number * 2 + 1};
        cout << "even number!" << endl;
        cout << number << " converted to odd: " << converted_odd << endl;
    }
    else {
        int converted_even {number * 2};
        cout << "odd number!" << endl;
        cout << number << " converted to even: " << converted_even << endl;
        // this will not work - converted_odd not in current scope
        // cout << converted_odd << endl;
    }

    if (number % 5 == 0) {
        int square {number * number};
        cout << "multiple of 5!" << endl;
        cout << "square(" << number << ") = " << square << endl;
        // these variables are not in current scope - do not run
        // cout << converted_odd << endl;
        // cout << converted_even << endl;
    }
    if (number > 9 && number < 100) {
        int cube {number * number * number};
        cout << "two digit number!" << endl;
        cout << "cube(" << number << ") = " << cube << endl;
    }
    // none of these variables in current scope (main) - will not be accessible
    // cout << converted_odd << endl;
    // cout << converted_even << endl;
    // cout << square << endl;
    // cout << cube << endl;

    // variable in global scope - accessible
    cout << "number is " << number << endl;

    return 0;
}