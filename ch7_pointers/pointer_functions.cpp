#include <iostream>
#include <vector>
#include <string>


using namespace std;

// pass by reference with pointers
void make_odd (int *);
void make_even (int *);
void swap (int *, int *);
void multiply(int *, int*);

// function overloading and pass by reference
void display (vector <string> *);
void display (int *, int);

// a function with constant pointer 
void no_change (const vector <int> *const);

int main () {

    int even_number { 10 },
        odd_number { 7 },
        some_number1 { 10 },
        some_number2 { 20 };

    int array [5] { 11, 13, 17, 19, 23 };

    int *ptr { &odd_number };
    int *aptr { array };

    vector <string> words { "hello", "world", "welcome", "c++", "programming" };
    vector <int>    numbers { 10, 20, 30, 40, 50 };

    vector <string> *vptr { &words };
    vector <int>    *iptr { &numbers };

    cout << "even_number " << even_number << endl;
    cout << "odd_number " << odd_number << endl;
    cout << endl;

    // passing the address directly as reference
    make_odd(&even_number);
    
    // passing the address as a pointer value
    make_even(ptr);

    cout << "make_odd(even_number) " << even_number << endl;
    cout << "make_even(odd_number) " << odd_number << endl;
    cout << endl;

    // passing reference as address and pointer
    swap(&even_number, ptr);

    cout << "even_number " << even_number << endl;
    cout << "odd_number " << odd_number << endl;
    cout << endl;

    cout << "contents of vector (pointer variable) " << endl;
    display(vptr);

    cout << "contents of vector (passing the address) " << endl;
    display(&words);

    cout << "contents of vector" << endl;
    no_change(iptr);

    cout << "contents of array (passing address) " << endl;
    display(array, 5);

    cout << "contents of array (passing pointer) " << endl;
    display(aptr, 5);

    cout << "ORIGINAL_VALUES" << endl;
    cout << "some_number1 " << some_number1 << " some_number2 " << some_number2 << endl; 

    multiply(&some_number1, &some_number2);

    cout << "*x = *x * *y " << some_number1 << " " << some_number2 << endl;

    return 0;
}

void make_odd (int *int_ptr) {
    *int_ptr = *int_ptr * 2 + 1;
}

void make_even (int *int_ptr) {
    *int_ptr *= 2;
}

void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void multiply (int *x, int *y) {
    *x = *x * *y;
}

void display (vector <string> *vptr) {
    cout << "[ ";
    for (auto v: *vptr) {
        cout << v << " ";
    }
    cout << "]" << endl;
    cout << "size: " << (*vptr).size() << endl;
    cout << endl;
}

void display (int *array, int size) {
    int count { 0 };

    cout << "[";
    while (count < size) {
         cout << *array++ << ", ";
         if (count == size - 1)
             cout << "]" << endl;
        count++;
    }
    cout << endl;
}

void no_change (const vector <int> *const ptr) {
    cout << "[ ";
    for (auto i: *ptr) {
        cout << i << " ";
    }
    cout << "]" << endl;
    cout << "size: " << (*ptr).size() << endl;
    cout << endl;

    // these methods are not allowed
    // (*ptr).at(0) = 99; // pointer to constant
    // ptr = nullptr; // constant pointer
}