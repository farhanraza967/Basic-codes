
#include<iostream>
using namespace std;    
int main(){
    int n;
    int a=45; // Random number to be guessed
    cout<<"Guess the number: ";
    cin>> n;
    for(int i=1;; i++){
        
        if (a==n){
            cout<<"You guessed the number!";
            break;
        }
        else if (a>n){
            cout<<"Guess higher!: ";
            cin>> n;
        }
        else if (n>a){
            cout<<"Guess lower!: ";
            cin>> n;
        }
    }
    cout<<endl;
    return 0;
}
