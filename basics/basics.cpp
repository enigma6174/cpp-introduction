#include <iostream>
#include <vector>
#include <string>

// This is the better approach 
// using std::cout;
// using std::cin;
// using std::endl;

using namespace std;

int main() {
    int number;
    double decimal;
    
    cout << "enter a number: ";
    cin >> number;

    cout << "enter a decimal: ";
    cin >> decimal;

    cout << "number is " << number << endl;
    cout << "decimal is " << decimal << endl;

    return 0;
}