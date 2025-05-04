#include<iostream> 
using namespace std; 
int main() {
double balance, rate; 
int years; 
cout<<"What is the starting balance : "; 
cin>>balance; 
cout<<"What is the annual interest rate : "; 
cin>>rate; 
cout<<"How many years to calculate interest : "; 
cin>>years; 
for(int i = 1; i<=years; ++i) 
{ 
balance *= rate; 
} 
cout<<"After "<<years<<" years, balance will be " 
<<balance<<endl; 
return 0; 
} 
