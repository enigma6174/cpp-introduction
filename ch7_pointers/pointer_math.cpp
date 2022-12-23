#include <iostream>
#include <string>

using namespace std;


int main () {

    int array[5] {11, 13, 17, 19, -1};
    int *ptr {array};

    // increment operator on the ptr
    while (*ptr != -1) {
        cout << *ptr++ << endl;
    }
    ptr = array;

    cout << endl;

    string string1 {"Frank"};
    string string2 {"Frank"};
    string string3 {"James"};

    string *s1 {&string1};
    string *s2 {&string2};
    string *s3 {&string1};

    cout << boolalpha ;

    // comparison of values
    cout << "string1 == string2 ? " << (string1 == string2) << endl; // true
    cout << "string1 == string3 ? " << (string1 == string3) << endl; // false
    cout << "string2 == string3 ? " << (string2 == string3) << endl; // false
    cout << endl;

    // pointer de-referencing comparison
    cout << "*s1 == *s2 ? " << (*s1 == *s2) << endl; // true
    cout << "*s1 == *s3 ? " << (*s1 == *s3) << endl; // true
    cout << "*s2 == *s3 ? " << (*s2 == *s3) << endl; // true
    cout << endl;

    // pointer comparison
    cout << "s1 == s2 ? " << (s1 == s2) << endl; // false
    cout << "s1 == s3 ? " << (s1 == s3) << endl; // true
    cout << "s2 == s3 ? " << (s2 == s3) << endl; // false
    cout << endl;

    cout << "\n------------------------------------\n" << endl;

    char name [] {"FRANK"};

    char *ptr1 = &name[0];
    char *ptr2 = &name[3];

    cout << "&name[0] == name ? " << (&name[0] == name) << endl;
    
    int i {0};
    while (name[i]) {
        cout << name[i];
        i++;
    }
    cout << endl;

    cout << "ptr2 - ptr1 is " << (ptr2 - ptr1) << endl;
    cout << "ptr1 - ptr2 is " << (ptr1 - ptr2) << endl;
    cout << *ptr2 << " is " << (ptr2 - ptr1) << " characters from " << *ptr1 << endl;
    
    return 0;
} 