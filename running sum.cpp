#include<iostream>
using namespace std;
int main(){
   int num, limit, RunningSum;
 cout<<"Enter a limit number: "<<endl;
    cin>>limit;
    RunningSum = 0;
 while (RunningSum < limit){
    cout<<"Enter a number: "<<endl;
    cin>>num;
    RunningSum += num;
    cout<<"Running Sum: "<<RunningSum<<endl;
 }
    return 0;
}
