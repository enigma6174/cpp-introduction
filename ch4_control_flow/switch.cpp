#include <iostream>

using namespace std;

int main() {
    int day {};

    enum Color {
        red, green, blue
    };
    Color screen_color {green};

    cout << "enter working day number: ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "MONDAY" << endl;
            break;
        case 2:
            cout << "TUESDAY" << endl;
            break;
        case 3:
            cout << "WEDNESDAY" << endl;
            break;
        case 4: 
            cout << "THURSDAY" << endl;
            break;
        case 5:
        case 6:
        case 7:
            cout << "WEEKEND!" << endl;
            break;
        default:
            cout << "WRONG INPUT!" << endl;
    }

    switch (screen_color) {
        case red: 
            cout << "red" << endl; 
            break;
        case green: 
            cout << "green" << endl; 
            break;
        case blue: 
            cout << "blue" << endl; 
            break;
        default:
            cout << "ERR!" << endl;
    }

    return 0;
}