#include <iostream>
using namespace std;
int main(){
int grades[] = {72, 84, 63, 55, 98};
int min = grades[0]; 
for(int i : grades) {
  if(i < min) { 
    min = i; 
  }
}
cout << "The lowest grade is " << min << endl; 
  return 0;
}
