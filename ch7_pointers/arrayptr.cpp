#include <iostream>

using namespace std;


void    subscript_notation ();
void    offset_notation ();
void    display_address ();

int main () {

    subscript_notation ();
    offset_notation ();
    display_address ();

    return 0;
}

void subscript_notation () {
    int arr[3] {11, 121, 1331};
    int *ptr {arr};

    cout << "\nSUBSCRIPT NOTATION\n" << endl;
    
    for (int i {0}; i < 3; i++) {
        cout << "ptr[" << i << "] is " << ptr[i] << endl;
        cout << "arr[" << i << "] is " << arr[i] << endl;
        cout << endl;
    }
}

void offset_notation () {
    int arr [4] {5, 25, 125, 625};
    int *ptr {arr};

    cout << "\nOFFSET NOTATION\n" << endl;

    for (int i {0}; i < 4; i++) {
        cout << "*(ptr + " << i << ") is " << *(ptr + i) << endl;
        cout << "*(arr + " << i << ") is " << *(arr + i) << endl;
        cout << endl;
    }
}

void display_address () {
    int arr [5] {3, 9, 27, 81, 243};
    int *ptr {arr};

    cout << "\nADDRESS DISPLAY\n" << endl;

    for (int i {0}; i < 4; i++) {
        cout << "address of (ptr + " << i << ") is " << (ptr + i) << endl;
        cout << "address of (arr + " << i << ") is " << (arr + i) << endl;
        cout << endl;
    }
}