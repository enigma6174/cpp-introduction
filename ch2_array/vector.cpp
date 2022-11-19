#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <char> no_buffer; // un-initialized vector
    vector <int> no_window; // un-initialized vector

    vector <char> characters (5); // default initialization
    vector <int> numbers (10); // default initialization

    vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; // initialization with values
    vector <int> scores {100, 98, 80, 79, 47, 73, 30}; // initialization with values

    vector <double> temperature_readings (100, 29.56); // initialize 100 locations with 29.56
    

    cout << characters[0] << " " << numbers[4] << endl;
    cout << vowels[0] << " " << scores[4] << endl;
    cout << temperature_readings[0] << "C " << temperature_readings[10] << "C " << temperature_readings[99] << "C" << endl;

    // size of the vector
    cout << "sizeof(temperature_readings) " << temperature_readings.size() << endl;

    // update vector elements with .at() method
    temperature_readings.at(0) = 35.51;
    temperature_readings.at(99) = 36.0;

    // access vector elements with .at() method
    cout << temperature_readings.at(0) << "C" << endl;
    cout << temperature_readings.at(99) << "C" << endl;

    // add elements to the vector
    temperature_readings.push_back(18.20);
    temperature_readings.push_back(19.12);

    cout << temperature_readings.at(100) << "C" << endl;
    cout << temperature_readings.at(101) << "C" << endl;

    cout << "sizeof(temperature_readings) " << temperature_readings.size() << endl;

    // remove elements from the vector
    temperature_readings.pop_back();
    temperature_readings.pop_back();

    cout << "sizeof(temperature_readings) " << temperature_readings.size() << endl;

    // vector of vectors
    vector <vector<int>> movie_ratings
    {
        {2, 1, 3},
        {3, 5, 4},
        {4, 5, 2}
    };

    cout << "\nmovie ratings for user_0" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;

    cout << "\nmovie ratings for user_1" << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;

    return 0;
}