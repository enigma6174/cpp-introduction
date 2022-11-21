#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int scores [] {100, 89, 72, 47, 92, 38, 80};
    double points [] {99.99, 12.02, 56.93, 39.89};

    vector <double> temps {36.72, 28.12, 40.01, 19.96, 32.05, 33.34, 20.80};
    double average_temperature {};

    cout << "scores:" << endl;

    // range loop
    for (int score: scores) {
        cout << score << " ";
    }
    cout << endl;

    cout << "\npoints:" << endl;
    
    // auto will automatically deduce the type
    for (auto point: points) {
        cout << point << " ";
    }
    cout << endl;

    cout << "\ninteger points:" << endl;

    // this will typecase to integer
    for (int point: points) {
        cout << point << " ";
    }
    cout << endl;

    // Calculate the average temperature
    cout << "\ntemperature readings: " << endl;
    for (auto temp: temps) {
        cout << temp << " ";
        average_temperature += temp;
        average_temperature /= temps.size();
    }
    cout << "\naverage temperature: " << average_temperature << endl;

    // Using the range loop to iterate over characters of a string
    cout << "\ncharacters are: " << endl;
    for (auto ch: "hello world welcome to C++ programming!") {
        if (ch == ' ') {
            cout << "#";
            continue;
        }
        cout << ch;
    }
    cout << endl;

    return 0;
}