#include<iostream> 
#include<conio2.h> 
using namespace std; 
int bubblesort(float array[], int N, char order); 
int main(){ 
    float num[10]={10.1,2.0,34.5,4.6,-5.7, 
                   6.2,77.0,18.8,9.4,0.0}; 
    char option; 
    int index; 
    cout<<"\nPrinting the given array.\n\n"; 
    for(index=0;index<10; index++) 
        cout<<num[index]<<endl; 
    cout<<"\nHow would you like to sort it?"<< 
        " press a for ascending d for"; 
    option=getche(); 
    bubblesort(num, 10, option);  
    cout<<"\n\nPrinting the sorted array.\n\n"; 
    for(index=0;index<10; index++) 
        cout<<num[index]<<endl; 
    getch(); 
    return 0; 
}                  
 
int bubblesort(float array[], int N, char order) 
{ 
    float buffer; 
    int pivot, index; 
    if((N<=0)||((order!='a')&&(order!='d'))) 
    { 
        return 0; 
    } 
    for(pivot=0;pivot<N-1;pivot++) 
        { 
            for(index=pivot;index<N;index++) 
            { 
                if(order=='a') 
                { 
                    if(array[pivot]>array[index]) 
                    { 
                        buffer=array[pivot]; 
                        array[pivot]=array[index]; 
                        array[index]=buffer; 
                    } 
                } 
                if(order=='d') 
                { 
                    if(array[pivot]<array[index]) 
                    { 
                        buffer=array[pivot]; 
                        array[pivot]=array[index]; 
                        array[index]=buffer; 
                    } 
                } 
            } 
        } 
    return 1; 
} 
