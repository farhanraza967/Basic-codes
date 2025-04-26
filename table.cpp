#include<iostream> 
#include<iomanip> 
#include<conio2.h> 
using namespace std; 
int main(){ 
    char option='y'; 
    double num; 
    int counter; 
    cout<<"\t\t****Multiplication Tables****"; 
    while( option!='n' ) 
    { 
        cout<<"\n\nEnter a number:"; 
        cin>>num; 
        for(counter=1;counter<=15;counter++) 
        { 
            cout<<left; 
            cout<<setw(10)<<num<<"*"<<right 
                <<setw(10)<<counter<<"="<< 
                setw(10)<<num*counter<<endl; 
        } 
        cout<<"\n\nDo you like to continue?(y or n):"; 
        option=getche(); 
    } 
    if(option=='n') 
    { 
        cout<<"Thanks for using this program"; 
    } 
    getch(); 
    return 0; 
}
