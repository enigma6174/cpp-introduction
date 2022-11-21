#include <iostream>

using namespace std;

int main() {

    int num1; // variable declaration
    int num2 {10}; // variable initialization

    num1 = 0; // variable initialization

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    num1 = -100; // variable assignment
    num2 = 991; // variable assignment

    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    num1 = num2; // variable assignment (type checking done at compile time)

    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    // expressions return values assigned to them or evaluated by them
    num1 = num2 = 100993; // chaining variable assignment (right to left associativity)

    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;

    int x = 200;
    int y = 7;
    
    int result1 = x / y; // integer division
    float result2 = x / y; // floating point division - result is still integer
    
    int remainder = x % y; // modulo operator

    cout << x << " integer divided by " << y << " is " << result1 << endl;
    cout << x << " floating divided by " << y << " is " << result2 << endl;
    cout << x << " divided by " << y << " remainder is " << remainder << endl;

    return 0;
}