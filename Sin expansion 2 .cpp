#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x;
    int terms;
    cout << "Enter a value for sin evaluation: ";
    cin >> x;
    cout << "Enter number of terms in the summation: ";
    cin >> terms;
    double result = 0.0;
    double term = x;
    int sign = 1;
    for (int n = 0; n < terms; ++n) {
        int power = 2*n+1;
        double factorial = 1.0;
        for (int i= 1; i<= power; ++i)
            factorial *= i;
        term = pow(x, power) / factorial;
        if (n%2 == 0)
            result += term;
        else
            result -= term;
    }
    cout << "Result is: " << result << endl;
    return 0;
}
