#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double num {};

    cout << "Enter number: ";
    cin >> num;

    cout << "The sqrt of " << num << " is " << sqrt(num) << endl;
    cout << "The cube root of " << num << " is " << cbrt(num) << endl;

    cout << "The sine of " << num << " is " << sin(num) << endl;
    cout << "The cosine of " << num << " is " << cos(num) << endl;

    cout << num << "**3 is " << pow(num, 3) << endl;
    cout << num << "**4 is " << pow(num, 4) << endl;

    return 0;
}