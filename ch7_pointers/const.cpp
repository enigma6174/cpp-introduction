#include <iostream>

using namespace std;


int main () {

    int high_score {100};
    int low_score {60};

    // pointer to constant
    // data pointed to by pointer is constant - this will not change
    // the pointer itself can change and point somewhere else
    const int *score_ptr {&high_score};

    cout << "POINTER TO CONSTANT" << endl;
    cout << "------------------------------------" << endl;

    cout << "high_score " << high_score << endl;
    cout << "*score_ptr " << *score_ptr << endl;
    cout << endl;

    cout << "&high_score " << &high_score << endl;
    cout << "score_ptr " << score_ptr << endl;
    cout << endl;

    // constant pointer can point to something else
    score_ptr = &low_score;

    // data that is pointed to cannot be changed
    // this will cause error
    // *score_ptr = 92;

    cout << "low_score " << low_score << endl;
    cout << "score_ptr " << *score_ptr << endl;
    cout << endl;

    cout << "&low_score " << &low_score << endl;
    cout << "score_ptr " << score_ptr << endl;
    cout << endl;

    // the original variables that were pointed to can be changed
    low_score = 30;

    cout << "low_score " << low_score << endl;
    cout << "*score_ptr " << *score_ptr << endl;
    cout << endl;

    cout << "CONSTANT POINTER" << endl;
    cout << "-------------------------------------------" << endl;

    // constant pointer to variable
    // data pointed to by pointer is variable
    // the pointer itself is constant and cannot change
    int *const cptr { &low_score };

    cout << "low_score " << low_score << endl;
    cout << "*cptr " << *cptr << endl;
    cout << endl;

    cout << "&low_score " << &low_score << endl;
    cout << "cptr " << cptr << endl;
    cout << endl;

    // the data pointed to by constant pointer can be modified
    *cptr = 18;

    cout << "low_score " << low_score << endl;
    cout << "*cptr " << *cptr << endl;
    cout << endl;

    // cannot modify the pointer
    // cptr = &high_score

    cout << "CONSTANT POINTER TO CONSTANT" << endl;
    cout << "----------------------------------------------" << endl;

    // constant pointer to constant
    // cannot change the pointer that points to data
    // cannot change the data pointed to by the pointer
    const int *const const_cptr { &high_score };

    cout << "high_score " << high_score << endl;
    cout << "*const_cptr " << *const_cptr << endl;
    cout << endl;

    cout << "&high_score " << &high_score << endl;
    cout << "const_cptr " << const_cptr << endl;
    cout << endl;

    // both will not work
    // const_cptr = &low_score;
    // *const_cptr = 100;

    return 0;
}