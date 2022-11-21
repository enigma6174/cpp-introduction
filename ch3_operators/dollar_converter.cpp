#include <iostream>

using namespace std;

int main() {
    const float current_rate {0.012};
    float amount {0.00};

    cout << "Welcome To INR -> USD Converter (1.00 INR = " << current_rate << " USD)" << endl;
    cout << "INR Amount: ";
    
    cin >> amount;
    cout << "USD Amount: " << amount * current_rate << endl;

    return 0;
}