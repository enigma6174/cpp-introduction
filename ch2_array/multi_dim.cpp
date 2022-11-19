#include <iostream>

using namespace std;

int main() {
    int movie_rating [3][4]; // un-initialized

    const int rows {2};
    const int cols {3};

    int n1 {0}, n2 {0}, n3 {0};

    int buffer [rows][cols] {0}; // initialized

    cout << buffer[0] << endl;
    cout << buffer[1][0] << buffer[1][1] << buffer [1][2] << endl;

    cout << "numbers for row0 -> ";
    cin >> n1 >> n2 >> n3;

    buffer[0][0] = n1;
    buffer[0][1] = n2;
    buffer[0][2] = n3;

    cout << buffer[0][0] << buffer[0][1] << buffer[0][2] << endl;

    return 0;
}