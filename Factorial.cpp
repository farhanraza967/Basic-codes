#include <iostream>
using namespace std;
int main() {
    int num;
    long long factorial = 1;
    cout<<"Enter an integer: ";
    cin>>num;
    if (num<0) {
        cout<< "Factorial is not defined for negative numbers." << endl;
    }
    else if (num == 0){
        cout << "0! = 1" << endl;
    } else{
        for (int i=num; i>=1; --i) {
            cout << i;
            factorial *= i;
            if (i > 1)
                cout << " x ";
        }
        cout << " = " << factorial << endl;
    }
    return 0;
}
