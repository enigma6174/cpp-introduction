#include <iostream>

using namespace std;

int main() {
    int x {},
        y {},
        z {};

    int max {};

    cout << "enter 3 numbers: " << endl;
    cin >> x >> y >> z;

    if (x > y)
        if (x > z)
            max = x;
        else
            max = z;
    else
        if (y > z) 
            max = y;
        else
            max = z;

    if (x == y && y == z && z == y) 
        cout << "All are equal!" << endl;

    cout << "max element is " << max << endl;

    return 0;
}