#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "even numbers using ++i" << endl;
    for (int i {0}; i < 10; ++i) {
        if (i % 2 == 0)
            cout << i << ", ";
    }
    cout << endl;

    cout << "\nodd numbers using i++" << endl;
    for (int i {0}; i < 10; i++) {
        if (i % 2 != 0)
            cout << i << ", ";
    }
    cout << endl;

    int array [] {100, 98, 78, 79, 86, 40};

    cout << "\ncontents of array: " << endl;
    for (int i {0}; i < 6; i++) {
        cout << array[i] << ", ";
    }
    cout << endl;

    // loop using comma operator
    for (int i {1}, j {5}; i < 6; i++, j++) {
        cout << i << " X " << j << " = " << (i*j) << endl;
    }
    cout << endl;

    // i will get initialized to 10 and j will get initialized to 80
    // every subsequent value of i will be incremented
    // every subsequent value of j will be 80
    for (int i {10}, j {i * 7 + i}; i < 16; i++) {
        cout << i << " X " << j << " = " << (i*j) << endl;
    }
    cout << endl;

    // i will get initialized to 10 and j will get initialized to 80
    // i and j will both get incremented for every subsequent call
    // future values of i will be 11, 12, 13... and j will be 80, 81, 82...
    for (int i {10}, j {i * 7 + i}; i < 16; i++, j++) {
        cout << i << " X " << j << " = " << (i*j) << endl;
    }
    cout << endl;

    vector<int> vec {10, 20, 30, 40, 50};
    for (int i {0}; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    int i {};

    cout << "\nprinting vec with while loop:" << endl; 
    while (i < vec.size()) {
        if (i == 0)
            cout << "[" << vec[i] << ", ";
        else if (i < vec.size() - 1)
            cout << vec[i] << ", ";
        else 
            cout << vec[i] << "]";
        i++;
    }
    cout << endl;

    for (int i {1}; i < 999; i++) {
        i = i * 3 + 7;
        if (i % 7 == 0 || i % 11 == 0) {
            cout << i << " is prime factor of 7 or 11, exiting..." << endl;
            break;
        }
        else 
            continue;
    }

    return 0;
}