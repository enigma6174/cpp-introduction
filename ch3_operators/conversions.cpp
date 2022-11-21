#include <iostream>

using namespace std;

int main() {
    
    int number {0};
    float real_number;

    // automatic type conversion - promotion: lower type converted to higher type
    real_number = 100 * 5.25345;

    // automatic type conversion - demotion: higher type converted to lower type
    number = 100 * 5.25345;

    cout << number << endl; // 525
    cout << real_number << endl; // 525.345

    int first_number {}; // default initialization
    int second_number {}; // default initialization

    cout << "\nDEFAULT:" << endl;
    cout << "first_number: " << first_number << endl;
    cout << "second_number: " << second_number << endl;

    cout << "\nINPUT:" << endl;

    cout << "first_integer: ";
    cin >> first_number;

    double fraction {};

    cout << "second_integer: ";
    cin >> second_number;

    // result without type conversion
    double result = first_number / second_number;
    cout << first_number << "/" << second_number << " = " << result << endl;

    // result with type conversion
    result = static_cast<double>(first_number) / second_number;
    cout << first_number << "/" << second_number << " = " << result << endl;

    return 0;
}