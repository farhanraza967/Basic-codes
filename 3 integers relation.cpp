#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n1, n2, n3;
    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;
    int s = n1 + n2 + n3;
    double a = s / 3.0;
    long long p = n1 * n2 * n3;
    int sm = min({n1, n2, n3});
    int l = max({n1, n2, n3});
    cout << "Sum = " << s << endl;
    cout << "Average = " << a << endl;
    cout << "Product = " << p << endl;
    cout << "Smallest = " << sm << endl;
    cout << "Largest = " << l << endl;

    return 0;
}
