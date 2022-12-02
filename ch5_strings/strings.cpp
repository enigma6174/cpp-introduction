#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1;
    string s2 {"Python"}; // Python
    string s3 {s2}; // Python
    string s4 {"Python", 3}; // Pyt
    string s5 {s3, 2, 5}; // thon
    string s6 (5, 'X'); // XXXXX

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl; 
    cout << s6 << endl;

    cout << endl;

    // string assignment operations
    s1 = "C++ Programming is fun!";
    cout << s1 << endl;

    s2 = "hello world";
    cout << s2 << endl;

    string part1 {"welcome"};
    string part2 {"to"};
    string part3 {"C++ programming"};

    // this is valid
    string sentence = part1 + " " + part2 + " " + part3;
    cout << sentence << endl;

    // this is not valid; cannot concatenate C-style strings with + operator
    // sentence = "hello" + " " + "world";
    // cout << sentence << endl;

    // get postion of character by indexing
    cout << "character at index 0 of string '" << sentence << "' is: " << sentence[0] << endl;
    cout << "character at index 11 of string '" << sentence << "' is: " << sentence[11] << endl;
    cout << "character at index 120 of string '" << sentence << "' is: " << sentence[120] << endl;

    // get position using .at(i) method
    cout << "character at index 0 of string '" << sentence << "' is: " << sentence.at(0) << endl;
    cout << "character at index 11 of string '" << sentence << "' is: " << sentence.at(11) << endl;

    // this will cause error as .at(i) method performs bounds checking
    // cout << "character at index 120 of string '" << sentence << "' is: " << sentence.at(120) << endl;
    cout << endl;

    string str {"hello"};

    // display the characters 
    for (char ch: str) {
        cout << ch << " ";
    }
    cout << endl;

    // display ascii of characters
    for (int i: str) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}