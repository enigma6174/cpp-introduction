#include <iostream>
#include <vector>
#include <string>

using namespace std;


// having same function name but with different signatures
void    display(int);
void    display(double);
void    display(std::string);
void    display(std::string, std::string);
void    display(vector<int>);
void    display(vector<string>);

int     sum(int);
int     sum(int, int);
double  sum(double, double);


int main() {

    vector<int> numbers {10, 20, 30, 40, 50};
    vector<string> words {"the" , "quick", "brown", "fox"};

    cout << "calling overloaded functions display()" << endl;

    display(200);
    display(3.12464);
    display("hello world");
    display("C++", "Programming");
    display(numbers);
    display(words);

    cout << "calling overloaded functions sum()" << endl;

    cout << "sum till 10 is " << sum(10) << endl;
    cout << "sum of 23 and 32 is " << sum(23, 32) << endl;
    cout << "sum of 0.0123 and 2.378 is " << sum(0.0123, 2.378) << endl;

    return 0;
}

void display(int n) {
    cout << "display(int): " << n << endl;
}

void display(double d) {
    cout << "display(double): " << d << endl;
}

void display(std::string s) {
    cout << "display(std::string): " << s << endl;
}

void display(std::string s, std::string t) {
    cout << "display(std::string, std::string): " << s << " " << t << endl;
}

void display(vector<int> buffer) {
    cout << "vector<int>: [";
    for (auto i: buffer) {
        cout << i << " ";
    }
    cout << "]" << endl;
}

void display(vector<string> buffer) {
    cout << "vector<string>: {";
    for (auto s: buffer) {
        cout << s << " ";
    }
    cout << "}" << endl;
}

int sum(int range) {
    int sum {0};
    for (size_t i = 0; i < range; i++) {
        sum += i;
    }
    return sum;
}

int sum(int x, int y) {
    return x + y;
}

double sum(double d1, double d2) {
    return d1 + d2;
}