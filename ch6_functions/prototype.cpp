#include <iostream>
#include <cmath>

using namespace std;


// function prototypes
bool    palindrome(int); // return: bool parameter: int
int     modulo(int, int); // return: int parameter: int int
double  hypotenuse(double, double); // return: double parameter: double double
void    message(std::string); // return: void paramter: string

int main() {
    int flag {},
        num {},
        x {},
        y {};

    double  side1 {},
            side2 {};

    string  name {};

    cout << "number: ";
    cin >> num;

    flag = palindrome(num);
    if (flag) 
        cout << num << " is palindrome" << endl;
    else 
        cout << num << " is not palindrome" << endl;

    cout << "x: ";
    cin >> x;
    
    cout << "y: ";
    cin >> y;

    cout << x << " modulo " << y << " is " << modulo(x, y) << endl;

    cout << "height: ";
    cin >> side1;

    cout << "base: ";
    cin >> side2;

    cout << "hypotenuse(" << side1 << ", " << side2 << ") is " << hypotenuse(side1, side2) << endl;

    cout << "name: ";
    cin >> name;

    message(name);

    return 0;
}

bool palindrome(int number) {
    int current_number {number};
    int reverse {},
        remainder {};

    while (current_number != 0) {
        remainder = current_number % 10;
        current_number = current_number / 10;
        reverse = reverse * 10 + remainder;
    }

    if (reverse == number) return true;

    return false;
}

int modulo(int x, int y) {
    return x % y;
}

double hypotenuse(double height, double base) {
    return sqrt(pow(height, 2) + pow(base, 2));
}

void message(std::string name) {
    cout << "Hello " << name << endl;
}