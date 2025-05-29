#include <iostream>
using namespace std;
bool Prime(int n, int i = 2){
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return Prime(n, i + 1);
}
int main(){
    int num;
    cin>>num;
    if (Prime(num))
        cout << num << " is Prime.";
    else
        cout << num << " is Composite.";
    return 0;
}
