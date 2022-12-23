#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};

    cout << "SYSTEM RAND_MAX: " << RAND_MAX << endl;
    srand(time(nullptr));

    cout << "generating " << count << " random numbers between (" << min << ", " << max << ")" << endl;
    for (size_t i {1}; i <= count; i++) {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }
}