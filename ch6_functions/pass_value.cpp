#include <iostream>

using namespace std;


void param_test(int);

int main() {
    int actual {50};
    
    cout << "actual: " << actual << endl;

    // pass by value
    // the copy of the value is passed - original remains unchanged
    param_test(actual);

    cout << "actual: " << actual << endl;

    return 0;
}

void param_test(int formal) {
    cout << "formal: " << formal << endl;
    
    formal -= 100;
    cout << "formal: " << formal << endl;
}