#include <iostream>


using namespace std;

// function that returns a pointer
int *max (int *, int *);
int *create_array (size_t, int);

int main () {

    int number1 { 100 },
        number2 { -100 };

    int *ptr { &number1 };
    int *fptr { nullptr };

    cout << "max(" << number1 << ", " << number2 << ") " << endl;
    cout << *max(ptr, &number2) << endl;

    // create an array of 10 elements all initialized to 5
    // this array is stored on the heap as it is created dynamically
    fptr = create_array(10, 5);

    cout << "contents of array in heap" << endl;
    for (size_t i {0}; i < 10; i++) {
        cout << *(fptr + i) << " ";
    }
    cout << endl;

    // delete the heap storage after use
    delete [] fptr;

    return 0;
}

int *max (int *number1, int *number2) {
    if (*number1 > *number2)   
        return number1;
    else
        return number2;
}

int *create_array (size_t size, int init_value = 0) {
    int *new_storage { nullptr };

    new_storage = new int[size];
    for (size_t i {0}; i < size; i++) {
        *(new_storage + i) = init_value;
    }
    
    return new_storage;
}