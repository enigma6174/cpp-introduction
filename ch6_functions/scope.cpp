#include <iostream>

using namespace std;


int global_num {100};

void static_example();
void dynamic_example();

int main() {
    
    for (size_t i{0}; i < 4; i++) {
        static_example();
    }

    for (size_t i{0}; i < 4; i++) {
        dynamic_example();
    }
}

void static_example() {
    // this variable will get initialized only once no matter how many times called
    static int num {2000};

    cout << "static num: " << num << endl;

    num += 101;
    cout << "static num: " << num << endl;
}

void dynamic_example() {
    // will get initialized on every function call
    int num {2000};

    cout << "num: " << num << endl;
    
    num += 101;
    cout << "num: " << num << endl;
}