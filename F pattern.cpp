#include<iostream>
using namespace std;
int main(){
int n;
 cout<< "Enter the height of F: "; 
    cin >> n;
    for (int i=1; i<=n;i++){
        if (i==1 || i==n/2+1){ 
            for (int j=1; j<=n*3/4; j++){
                cout << "*";
            }
        } 
        else{ 
            cout<< "*";
        }
        cout<<endl;
    }
}
