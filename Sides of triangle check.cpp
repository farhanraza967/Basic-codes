#include <iostream>
#include <cmath>
using namespace std;
const double EPSILON = 1e-9;
bool isGreater(double x, double y) {
    return (x - y) > EPSILON;
}
int main() {
    double a, b, c;
    cout << "Enter length of three sides: ";
    cin >> a >> b >> c;
    // Check for non-zero positive values
    if (fabs(a) < EPSILON || fabs(b) < EPSILON || fabs(c) < EPSILON) {
        cout << "Sides must be non-zero positive values." << endl;
        return 1;
    }
    // Check triangle inequality
    if (isGreater(a + b, c) && isGreater(a + c, b) && isGreater(b + c, a)) {
        cout << "They are sides of triangle." << endl;
    } else {
        cout << "They are not sides of triangle." << endl;
    }

    return 0;
}
