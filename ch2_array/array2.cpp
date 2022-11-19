#include <iostream>

using namespace std;

int main() {
    char vowels [] {'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << vowels[1] << vowels[2] << vowels[3] << vowels[4] << endl;

    vowels[0] = 'A';
    vowels[1] = 'E';
    vowels[2] = 'I';
    vowels[3] = 'O';
    vowels[4] = 'U';

    cout << vowels[0] << vowels[1] << vowels[2] << vowels[3] << vowels[4] << endl;

    int test_scores [5];

    cout << endl;

    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    cout << test_scores[3] << endl;
    cout << test_scores[4] << endl;

    cout << endl;

    cout << "Enter 5 numbers" << endl;
    cin >> test_scores[0] >> test_scores[1] >> test_scores[2] >> test_scores[3] >> test_scores[4];

    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    cout << test_scores[3] << endl;
    cout << test_scores[4] << endl;

    return 0;
}