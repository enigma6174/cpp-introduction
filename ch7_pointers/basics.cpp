#include <iostream>
#include <string>

using namespace std;


int main() {

    // always initialize pointer variables
    // null pointer implies the pointer is pointing nowhere
    int *int_ptr {}; // integer pointer
    double *dbl_ptr {nullptr}; // double pointer iniitalized with null pointer
    char *char_ptr {nullptr}; // character pointer initialized with null pointer
    string *string_ptr {nullptr}; // string pointer initialized with null pointer

    int *ptr {nullptr};

    cout << "address inside ptr is " << ptr << endl;
    cout << "address of pts is " << &ptr << endl;
    cout << "sizeof ptr is " << sizeof ptr << endl; 

    cout << "\nPOINTER VARIABLE SIZES:\n" << endl;

    // all pointers have the same size - they hold memory address
    // size of what a pointer points to can be different
    // but every pointer is of the same size
    cout << "size of int_ptr is " << sizeof int_ptr << endl;
    cout << "size of dbl_ptr is " << sizeof dbl_ptr << endl;
    cout << "size of char_ptr is " << sizeof char_ptr << endl;
    cout << "size of string_ptr is " << sizeof string_ptr << endl;

    cout << endl;

    // the type of the pointer and the value they are pointing to must be of the same type
    int number {100};
    int_ptr = &number;

    // pointer of type double cannot point to a value of type int
    // double_ptr = &number;

    cout << "address of number " << &number << endl;
    cout << "contents of int_ptr " << int_ptr << endl;
    cout << "value of int_ptr address " << *int_ptr << endl;

    cout << endl;

    double temperature {25.89};
    double *temp_ptr {&temperature};

    cout << "temperature " << temperature << endl;
    cout << "address of temperature " << &temperature << endl;
    cout << "contents of temp_ptr " << temp_ptr << endl;
    cout << "value of temp_ptr address " << *temp_ptr << endl;

    cout << "\nUPDATING TEMPERATURE\n" << endl;

    temperature = 32.56;

    cout << "temperature " << temperature << endl;
    cout << "address of temperature " << &temperature << endl;
    cout << "contents of temp_ptr " << temp_ptr << endl;
    cout << "value of temp_ptr address " << *temp_ptr << endl;

    return 0;
}