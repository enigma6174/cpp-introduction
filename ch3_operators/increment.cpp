#include <iostream>

using namespace std;

int main() {

    int counter {10};
    int result {0};

    // post increment operator
    // current value of counter will be assigned to result first
    // after assignment counter will be incremented by 1
    result = counter++;

    cout << counter << endl; // 11
    cout << result << endl; //  10
    cout << endl;

    // pre increment operator
    // value of counter will be incremented by 1
    // after increment current value of counter will be assigned to result
    result = ++counter;

    cout << counter << endl; // 12
    cout << result << endl; // 12
    cout << endl;

    result = ++counter + 10;

    cout << counter << endl; // 13
    cout << result << endl; // 23
    cout << endl;

    result = counter++ + 10;

    cout << counter << endl; // 14
    cout << result << endl; // 23
    cout << endl;

    return 0;
}