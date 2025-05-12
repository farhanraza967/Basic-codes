#include <iostream>
using namespace std;
int main(){
    int n;
    long long f = 1;
    cout<<"Enter an integer: ";
    cin>>n;
    if (n<0){
        cout<< "Factorial is not defined for negative numbers." << endl;
    }
    else if (n == 0){
        cout << "0! = 1" << endl;
    } else{
        for (int i=n; i>=1; --i){
            cout << i;
            f*= i;
            if (i > 1)
                cout << " x ";
        }
        cout << " = " << f<< endl;
    }
    return 0;
}
