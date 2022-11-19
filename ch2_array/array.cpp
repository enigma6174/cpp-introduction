#include <iostream>

using namespace std;

int main() {
    int scores [5]; // un-initialized array
    int test_scores [5] {100, 99, 79, 59, 68}; // initialized array
    int high_scores [10] {98, 97, 100}; // others will be initialized to 0
    
    const int tickets {5};
    int ticket_price [tickets] {0}; // init all to 0

    int my_window [] {10, 20, 30, 40, 50}; // size calculated dynamically

    // Memory address of the array will be printed
    cout << scores << endl;
    cout << test_scores << endl;

    cout << endl;

    cout << scores[2] << endl; // 1 
    cout << test_scores[4] << endl; // 68
    cout << high_scores[1] << endl; // 97
    cout << high_scores[6] << endl; // 0
    cout << my_window[0] << endl; // 10

    cout << endl;

    cout << ticket_price[0] << endl;
    cout << ticket_price[1] << endl;
    cout << ticket_price[2] << endl;
    cout << ticket_price[3] << endl;
    cout << ticket_price[4] << endl;

    return 0;
}