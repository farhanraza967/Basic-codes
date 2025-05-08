#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a five-digit integer: ";
    cin>>number;
    if (number>=10000 && number<=99999){
        int d1 = number/10000;
        int d2 = (number/1000)%10;
        int d3 = (number/100)%10;
        int d4 = (number/10)%10;
        int d5 = number%10;
        cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;
    } else {
        cout << "Invalid input! Please enter a five-digit integer." << endl;
    }
    return 0;
}
