#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main () {

    int number {100};
    int *p {&number};

    cout << "number: " << number << endl;
    cout << "&number: " << &number << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;

    cout << endl;

    number = 201;

    cout << "number: " << number << endl;
    cout << "*p: " << *p << endl;

    cout << endl;

    *p = 525;

    cout << "number: " << number << endl;
    cout << "*p: " << *p << endl;

    cout << "\n----------------------------------------------------------" << endl;

    string str {"programming"};
    string *strptr {&str};

    cout << "(value, ptr_value): " << str << " " << *strptr << endl;
    cout << "(address, ptr): " << &str << " " << strptr << endl;
    cout << endl;

    str = "coding";

    cout << "(value, ptr_value): " << str << " " << *strptr << endl;
    cout << "(address, ptr): " << &str << " " << strptr << endl;
    cout << endl;

    *strptr = "development";

    cout << "(value, ptr_value): " << str << " " << *strptr << endl;
    cout << "(address, ptr): " << &str << " " << strptr << endl;
    
    cout << "\n----------------------------------------------------------" << endl;

    vector<string> words {"today", "is", "a", "good", "day"};
    vector<string> *vptr {&words};

    cout << "words.at(2): " << words.at(2) << endl;
    cout << "words.at(0): " << words.at(0) << endl;
    cout << "words.size(): " << words.size() << endl;
    
    cout << endl;

    // paranthesis around vector pointer is must - by default . has higher priority than *
    // adding paranthesis increases the priority
    cout << "(*vptr).at(2): " << (*vptr).at(2) << endl; 
    cout << "(*vptr).at(0): " << (*vptr).at(0) << endl;
    cout << "(*vptr).size(): " << (*vptr).size() << endl;

    return 0;
}