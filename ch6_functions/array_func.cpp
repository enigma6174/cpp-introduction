#include<iostream>

using namespace std;


void zero_array(int [], size_t);
void print(int [], size_t);

int main() {
    int numbers[] {10, 20, 30, 40, 50, 60};

    print(numbers, 6);
    zero_array(numbers, 6);
    print(numbers, 6);

    return 0;
}

void zero_array(int numbers[], size_t size) {
    for (size_t i{0}; i < size; i++) {
        numbers[i] = 0;
    }
}

void print(int numbers[], size_t size) {
    cout << "[";
    for (size_t i{0}; i < size; i++) {
        if (i < size - 1)
            cout << numbers[i] << ", ";
        else
            cout << numbers[i] << "]";
    }
    cout << endl;
}
