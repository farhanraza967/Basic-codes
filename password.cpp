#include<iostream> 
using namespace std; 
int main(){ 
    string stored_password="abcd1234"; 
    string user_password; 
    cout<<"Enter password:"; 
    cin>>user_password; 
    if(user_password==stored_password) 
    { 
        cout<<"\nAccess granted\n"; 
    } 
    else 
    { 
        cout<<"\nAccess denied\n"; 
    } 
    return 0; 
} 
