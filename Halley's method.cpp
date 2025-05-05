#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // f(x) = ax^3 + bx^2 + cx + d
    double a, b, c, d, x0, x1;
    double precision = 0.0001;
    cout << "Enter coefficients a, b, c, d \n";
    cin >> a >> b >> c >> d;
    cout << "Enter initial guess (x0): ";
    cin >> x0;
    while (true){
        double fx = a*pow(x0,3) + b*pow(x0,2) + c*x0 + d;
        double fx1 = 3*a*pow(x0,2) + 2*b*x0 + c;
        double fx2 = 6*a*x0 + 2*b;
        x1=x0-(2*fx*fx1)/(2*pow(fx1,2)-fx*fx2);
        if (fabs(x1-x0) < precision)
            break;
        x0 = x1;
    }
    cout << "Root is approximately: " << x1 << endl;
    return 0;
}
