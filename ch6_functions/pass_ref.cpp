#include <iostream>
#include <vector>

using namespace std;


void make_odd(int &num); // pass a reference to num variable
void swap(int &num1, int &num2); // pass references to num1 and num2
void print(const vector<int> &v); // pass a const reference to the vector
void modify(vector<int> &v); // pass reference to vector

int main() {
    int num {100};
    int num1 {20}, num2 {50};
    vector<int> numbers {10, 20, 30, 40, 50};

    cout << "num is " << num << endl;
    cout << "num1 is " << num1 << " and num2 is " << num2 << endl;

    print(numbers);

    cout << "\nPERFORM OPERATIONS ON MEM_ADDR\n" << endl;

    make_odd(num);
    swap(num1, num2);
    modify(numbers);

    cout << "num is " << num << endl;
    cout << "num1 is " << num1 << " and num2 is " << num2 << endl;

    print(numbers);

    return 0;
}

void make_odd(int &num) {
    num = num * 3 + 1;
}

void swap(int &num1, int &num2) {
    int t = num1;
    num1 = num2;
    num2 = t;
}

void print(const vector<int> &v) {
    cout << "[";
    for (auto num: v) {
        cout << num << " ";
    }
    cout << "]" << endl;
}

void modify(vector<int> &v) {
    for (size_t i{0}; i < v.size(); i++) {
        v.at(i) = v.at(i) * 10;
    }
}