#include <iostream>
#include <climits>

using namespace std;

// Global variables are automatically initialized to default values
int global_int;
double global_double;
string global_string;

int main() {

    int garbage; // Un-initialized
    int number = 10; // C-like initialization
    int value (20); // Constructor initialization
    int result {121}; // C++ 11 list initialization syntax; reccomended

    cout << garbage << endl;
    cout << number << endl;
    cout << value << endl;
    cout << result << endl;

    cout << global_int << endl;
    cout << global_double << endl;
    cout << global_string << endl;

    cout << endl;

    cout << "char " << sizeof(char) << " bytes" << endl;
    cout << "short " << sizeof(short) << " bytes" << endl;
    cout << "int " << sizeof(int) << " bytes" << endl;
    cout << "uint " << sizeof(unsigned int) << " bytes" << endl;
    cout << "long " << sizeof(long) << " bytes" << endl;
    cout << "float " << sizeof(float) << " bytes" << endl;
    cout << "double " << sizeof(double) << " double" << endl;

    cout << endl;

    cout << sizeof garbage << endl;
    cout << sizeof result << endl;

    cout << endl;

    cout << "CHAR_MAX " << CHAR_MAX << endl;
    cout << "INT_MAX " << INT_MAX << endl;
    cout << "UINT_MAX " << UINT_MAX << endl;
    cout << "SHORT_MAX " << SHRT_MAX << endl;
    cout << "LONG_MAX " << LONG_MAX << endl;

    cout << endl;

    cout << "CHAR_MIN " << CHAR_MIN << endl;
    cout << "INT_MIN " << INT_MIN << endl;
    cout << "SHORT_MIN " << SHRT_MIN << endl;
    cout << "LONG_MIN " << LONG_MIN << endl;

    return 0;
}