#include <iostream>

using namespace std;

int main() {

    const float sales_tax = 0.18;
    const float emi_rate = 0.25;

    int amount = 0;

    cout << "amount ? ";
    cin >> amount;

    cout << "total amount " << amount + amount * sales_tax << endl;
    cout << "emi rate " << amount * sales_tax * emi_rate << endl;

    return 0;
}