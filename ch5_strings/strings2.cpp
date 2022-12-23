#include <iostream>
#include <string>

using namespace std;

int main() {

    string string1 {"this is a string not a ring"};
    string string2 {string1};
    string search_string {};
    int search_index {};

    cout << search_index << endl;

    cout << "string: " << string1 << endl;
    cout << "string1.substr(0, 4): " << string1.substr(0, 4) << endl;
    cout << "string1.substr(5, 2): " << string1.substr(5, 2) << endl;
    cout << "string1.substr(10, 6): " << string1.substr(10, 6) << endl;
    cout << "string1.substr(5, 12): " << string1.substr(4, 12) << endl;

    cout << "enter search string: ";
    cin >> search_string;

    int found = string1.find(search_string);

    if (found >= 0) {
        cout << search_string << " is found at index " << found << endl; 
    }
    else {
        cout << search_string << " not found!" << endl;
    }

    cout << "enter search string: ";
    cin >> search_string;

    cout << "enter search index: ";
    cin >> search_index;

    found = string1.find(search_string, search_index);

    if (found >= search_index) {
        cout << "START_INDEX: " << search_index << " SEARCH_STRING: " << search_string << endl;
        cout << "STATUS: FOUND" << endl;
        cout << "FOUND_INDEX: " << found << endl;
    }
    else {
        cout << "START_INDEX: " << search_index << " SEARCH_STRING: " << search_string << endl;
        cout << "STATUS: NOT_FOUND" << endl;
    }

    cout << "string2: " << string2 << endl;

    // erase the contents of string
    cout << "string2.erase(0, 5): " << string2.erase(0,5) << endl;
    cout << "string2: " << string2 << endl;

    cout << "string2.erase(7, 4): " << string2.erase(7, 4) << endl;
    cout << "string2: " << string2 << endl;
    
    // clear the string
    string2.clear();
    cout << "string2: " << string2 << endl;

    cout << endl;

    cout << "string1: " << string1 << endl;
    cout << "string1.length(): " << string1.length() << endl;

    string2 += "hello";
    string2 += " ";
    string2 += "world";
    cout << "string2: " << string2 << endl;

    return 0;
}