#include<iostream> 
using namespace std; 
int main(){
// Starting braces of main 
    //***Variable Declaration*** 
    string name, year, department ; 
    char section; 
    int roll_no; 
    float cgpa; 
    //****Taking user input**** 
    cout<<"Enter your name:"; 
    cin>>name; 
    cout<<"Enter your Roll No.:"; 
    cin>>roll_no; 
    cout<<"Enter your department:"; 
    cin>>department; 
    cout<<"Enter year of study:"; 
    cin>>year; 
    cout<<"Enter your section:"; 
    cin>>section; 
    cout<<"What is your CGPA?";
cin>>cgpa; 
    cout<<endl<<endl; 
    //*****Printing Output***** 
    cout<<"\t  My Profile"<<endl; 
    cout<<"Name:"<<name<<"\tRoll No:" 
        <<roll_no<<endl<<"Section:" 
        <<section<<"\tYear:"<<year<< 
        endl<<"Department:"<< 
        department<<"\tCGPA:"<<cgpa; 
    return 0; 
} 
