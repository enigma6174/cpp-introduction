#include <iostream>

using namespace std;

int main() {

    int num1 {},
        num2 {},
        num3 {};

    cout << "enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num2 == num3 && num3 == num1) {
        cout << "all are equal!" << endl;
    }
    else if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " is the largest number!" << endl;
    }
    else if (num2 >= num1 && num2 >= num3) {
        cout << num2 << " is the largest number!" << endl;
    }
    else if (num3 >= num1 && num3 >= num1) {
        cout << num3 << " is the largest number" << endl;
    }
    return 0;
}