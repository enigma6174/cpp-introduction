#include <iostream>

using namespace std;


// function prototypes with default arguments
double taxed_salary(double, double rate = 0.20);
int sum_of_digits(int number = 1);

int main() {

    cout << "CTC on base salary 25000 is " << taxed_salary(25000) << endl;
    cout << "CTC on base salary 120000 at 35% rate " << taxed_salary(125000, 0.35) << endl;

    cout << "sum_of_digits() " << sum_of_digits() << endl;
    cout << "sum_of_digits(121) " << sum_of_digits(121) << endl;

    return 0;
}

double taxed_salary(double base_salary, double tax_rate) {
    return base_salary += base_salary * tax_rate;
}

int sum_of_digits(int number) {
    int sum {0};

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}