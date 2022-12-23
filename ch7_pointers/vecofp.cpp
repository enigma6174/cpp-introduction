#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main () {

    int number1 {100},
        number2 {200},
        number3 {300},
        number4 {400};

    int *p1 {&number1},
        *p2 {&number2},
        *p3 {&number3},
        *p4 {&number4};

    // vector of numbers
    vector<int> buffer {number1, number2, number3, number4};

    // a vector pointer to the above vector
    vector<int> *bptr {&buffer};

    // a vector of integer pointers
    vector<int *> ptrarray {p1, p2, p3, p4};

    cout << "vector operations: " << endl;
    cout << buffer.at(0) << endl;
    cout << buffer.at(3) << endl;;
    cout << buffer.size() << endl;

    cout << endl;

    cout << "vector operations with vector pointer: " << endl;
    cout << (*bptr).at(0) << endl;
    cout << (*bptr).at(3) << endl;
    cout << (*bptr).size() << endl;

    cout << endl;

    cout << "vector operations with vector of pointers: " << endl;
    cout << endl;
    
    for (size_t i {0}; i < ptrarray.size(); i++) {
        cout << "address in i=" << i << ptrarray.at(i) << endl;
        cout << "contents of address: " << *ptrarray.at(i) << endl;
        cout << endl;
    }
    cout << endl;

    cout << "UPDATING SOURCE CONTENTS" << endl;
    cout << endl;

    number1 = 11;
    number2 = 121;
    number2 = 1331;
    number4 = 14641;

    // these outputs will be the same as earlier output
    cout << "vector operations: " << endl;
    cout << buffer.at(0) << endl;
    cout << buffer.at(3) << endl;;
    cout << buffer.size() << endl;

    cout << endl;

    // these outputs will be the same as earlier output
    cout << "vector operations with vector pointer: " << endl;
    cout << (*bptr).at(0) << endl;
    cout << (*bptr).at(3) << endl;
    cout << (*bptr).size() << endl;

    cout << endl;

    cout << "vector operations with vector of pointers: " << endl;
    cout << endl;
    
    // these outputs will reflect the updated values
    for (size_t i {0}; i < ptrarray.size(); i++) {
        cout << "address in i=" << i << ptrarray.at(i) << endl;
        cout << "contents of address: " << *ptrarray.at(i) << endl;
        cout << endl;
    }
    cout << endl;


}