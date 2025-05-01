#include<iostream> 
using namespace std; 
 
int main(){ 
    const int MAX=100;  
    char name[MAX]; 
    int index; 
    int maxindex; 
    cout<<"\nEnter your name (press '#' to stop)\n"; 
    index=0; 
    while (true) {
        char ch;
        cin >> ch; 
        if (ch == '#') { // Use '#' as the termination character
            break;
        }
        name[index] = ch;
        index++;
        if (index == MAX) {
            cout << "\nArray Overflow\n";
            break;
        }
    }
    maxindex = index;
    // Simple processing of name[] array, converting small into capital letters
    for (index = 0; index < maxindex; index++) {
        if ((name[index] >= 'a') && (name[index] <= 'z')) { // Use character literals for clarity
            name[index] = name[index] - ('a' - 'A');
        }
    }
    cout<<"\nPrinting the processed array.\n"; 
    for(index=0;index<maxindex; index++) 
    { 
        cout<<name[index]; 
    } 
    return 0; 

}
