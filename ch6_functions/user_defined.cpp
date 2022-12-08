#include <iostream>
#include <cmath>

using namespace std;


double calc_area_circle(double radius) {
    return M_PI * pow(radius, 2);
} 

double calc_volume_cylinder(double radius, double height) {
    return M_PI * pow(radius, 2) * height;
}

void area_circle() {
    double radius {0};

    cout << endl;

    cout << "radius: ";
    cin >> radius;

    cout << "Area of circle is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {0};
    double height {0};

    cout << endl;

    cout << "radius: ";
    cin >> radius;

    cout << "height: ";
    cin >> height;

    cout << "Volume of cylinder is: " << calc_volume_cylinder(radius, height) << endl;
}

int main() {

    area_circle();
    volume_cylinder();

    return 0;

}