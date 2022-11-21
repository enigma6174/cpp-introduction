#include <iostream>

using namespace std;

int main() {

    int number1 {}, 
        number2 {};

    char    character1 {}, 
            character2 {};

    double  fraction1 {},
            fraction2 {};

    cout << "enter number1: ";
    cin >> number1;

    cout << "enter number2: ";
    cin >> number2;

    cout << number1 << " == " << number2 << " ? " << (number1 == number2) << endl;

    cout << boolalpha;
    cout << number1 << " == " << number2 << " ? " << (number1 == number2) << endl;
    cout << endl;

    cout << "enter character1: ";
    cin >> character1;

    cout << "enter character2: ";
    cin >> character2;

    cout << character1 << " == " << character2 << " ? " << (character1 == character2) << endl;
    cout << endl;

    cout << "enter fraction1: ";
    cin >> fraction1;

    cout << "enter fraction2: ";
    cin >> fraction2;

    cout << fraction1 << " == " << fraction2 << " ? " << (fraction1 == fraction2) << endl;

    return 0;
}