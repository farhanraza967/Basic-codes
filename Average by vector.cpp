#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char** argv) {
  double input;
  double total = 0;
  double avg = 0;
  vector<double> numList(0);
  cout << "Enter double or int to add to total, else find total average:" << endl;
  while (cin >> input) {
    
     numList.push_back(input);
  
    cout << "Enter double or int to add to total, else find total average:" << endl;
  }
  
  for (double val : numList) {
    total += val;
  }
  if (!numList.empty()) {
    avg = total / numList.size();
  }
  
  cout << avg << endl;
  return 0;
}
