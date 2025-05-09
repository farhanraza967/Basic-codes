#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x, sinx = 0, term;
    int n = 0;
    double precision = 0.0001;
    cout<< "Enter x (in radians): ";
    cin>> x;
    while (true) {
        term = pow(-1, n)*pow(x, 2*n+1)/tgamma(2*n+2); // tgamma(n+1) = n!
        if (fabs(term)< precision)
            break;
        sinx += term;
        n++;
    }

    cout<<"sin( "<<x<<" ) = "<<sinx<< endl;
    return 0;
}
