#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    int sum = num1 + num2 + num3;
    double average = sum / 3.0;
    long long product = 1LL * num1 * num2 * num3;
    int smallest = min({num1, num2, num3});
    int largest = max({num1, num2, num3});
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    cout << "Product = " << product << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}
