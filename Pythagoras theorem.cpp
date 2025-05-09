#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const double E = 1e-4;
bool isEqual(double x, double y) {
    return fabs(x-y)< E;
}
int main(){
    double a, b, c;
    cout << "Enter length of three sides: ";
    cin >> a >> b >> c;
    if (fabs(a) < 1e-9 || fabs(b) < 1e-9 || fabs(c) < 1e-9) {
        cout << "Sides must be non-zero positive values." << endl;
        return 1;
    }
    double sides[3] = {a, b, c};
    sort(sides, sides + 3); // too make c largest (ascending from a to c)
    double x = sides[0];
    double y = sides[1];
    double z = sides[2];
    if (isEqual(x * x + y * y, z * z)) {
        cout << "The sides represents right triangle." << endl;
    } else {
        cout << "The sides don’t represents right triangle." << endl;
    }
    return 0;
}
