#include <iostream>
using namespace std;
int main(){
    double x;
    int terms;
    cout<< "Enter a value whose exponential needs to be evaluated: ";
    cin>> x;
    cout<< "Enter number of terms for evaluation: ";
    cin>> terms;
    double result = 1.0;
    double term = 1.0;
    for (int i= 1; i< terms; ++i){
        term *= x/i;
        result += term;
    }
    cout << "Result is: " << result << endl;
    return 0;
}
