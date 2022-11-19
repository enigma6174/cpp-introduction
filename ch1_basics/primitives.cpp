#include <iostream>

using namespace std;

int main() {

    char character {'A'};
    cout << character << endl;

    unsigned short int score {55};
    cout << score << endl;

    int countries {300};
    cout << countries << endl;

    long  population_of_florida {1538187};
    cout << population_of_florida << endl;

    long long population_of_earth {7'600'000'000};
    cout << population_of_earth << endl;

    float interest_rate {9.14};
    cout << interest_rate << endl;

    double pi {3.14159};
    cout << pi << endl;

    long double speed_of_light {2.99e8};
    cout << speed_of_light << endl;

    bool flag {false};
    cout << flag << endl;

    // Overflow example
    // short value1 {20000};
    // short value2 {15000};
    // int product = value1 * value2;
    
    // cout << value1 << "x" << value2 << " = " << product << endl;

    return 0;
}