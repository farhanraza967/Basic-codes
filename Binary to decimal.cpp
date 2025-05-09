#include <iostream>
using namespace std;
int main(){
    int binary;
    cout<< "Enter a binary number (only 0s and 1s): ";
    cin>> binary;
    int decimal = 0;
    int base = 1;  // Represents 2^0 initially
    while (binary > 0) {
        int lastDigit = binary % 10;
        if (lastDigit != 0 && lastDigit != 1) {
            cout << "Invalid input! Please enter only 0s and 1s." << endl;
            return 1;
        }
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    cout << "Decimal equivalent is: " << decimal << endl;
    return 0;
}
