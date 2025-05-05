#include<iostream>
using namespace std;
int main(){
   int num, digits=0;
   cout<<"Enter your number: ";
   cin>> num;
while(num>0){
    num=num/10;
    digits++;
}
cout<< "digits: "<<digits;
    return 0;
}
