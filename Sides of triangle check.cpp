#include <iostream>
#include <cmath>
using namespace std;
const double E = 1e-9;
bool isGreater(double x, double y) {
    return (x - y) > E;
}
int main() {
    double a, b, c;
    cout << "Enter length of three sides: ";
    cin >> a >> b >> c;
    if (fabs(a) < E || fabs(b) < E || fabs(c) < E) {
        cout << "Sides must be non-zero positive values." << endl;
        return 1;
    }
    if (isGreater(a + b, c) && isGreater(a + c, b) && isGreater(b + c, a)) {
        cout << "They are sides of triangle." << endl;
    } else {
        cout << "They are not sides of triangle." << endl;
    }

    return 0;
}
