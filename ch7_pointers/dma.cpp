#include <iostream>

using namespace std;


int main () {

    int *int_ptr {nullptr};

    // allocate an integer on the heap
    // a storage space is created dynamically at runtime on the heap
    // the address of this storage is present in int_ptr
    // there is no way to access this storage other than this pointer
    int_ptr = new int;

    cout << "address: " << int_ptr << endl;
    cout << "contents: " << *int_ptr << endl;

    // initialize with value
    *int_ptr = 100;

    cout << "contents(initialized): " << *int_ptr << endl;

    // release the  memory once done
    delete int_ptr;

    cout << endl;

    size_t size {0};
    int *buffer {nullptr};

    cout << "enter array size: ";
    cin >> size;

    // create a new array of size "size" at runtime
    // this array is present on the heap
    buffer = new int[size];

    cout << "dynamic array of size " << size << " created!" << endl;
    cout << "address of first element: " << buffer << endl;
    cout << "address of buffer[0]: " << &buffer[0] << endl;
    cout << "contents of buffer[0]: " << buffer[0] << endl;

    delete buffer;

    return 0;
}