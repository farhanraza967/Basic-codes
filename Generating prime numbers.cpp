#include <iostream>
using namespace std;
bool isPrime(int num){
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i){
        if (num % i == 0)
            return false;
    }
    return true;
}
int main(){
    int quantity;
    cout << "Enter quantity of prime numbers to generate: ";
    cin >> quantity;
    int count = 0;
    int number = 2;
    while (count < quantity){
        if (isPrime(number)){
            cout << number;
            count++;
            if (count < quantity)
                cout << ", ";
        }
        number++;
    }
    cout << endl;
    return 0;
}
