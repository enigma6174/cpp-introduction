#include <iostream>

using namespace std;


unsigned long long factorial(unsigned long long);
unsigned long long fibonacci(unsigned long long);

int main() {

    unsigned long long result {0};

    result = fibonacci(14); // result will be 377
    cout << "fibonacci(144) is " << result << endl;

    result = factorial(7); // result will be 5040
    cout << "factorial(7) is " << result << endl;
    
    return 0;
}

unsigned long long factorial(unsigned long long n) {
    if (n == 0) 
        return 1;
    return n * factorial(n-1);
}

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1) 
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}