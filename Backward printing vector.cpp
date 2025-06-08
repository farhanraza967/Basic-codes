#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char** argv){
  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);

reverse.pop_back();
reverse.pop_back();
reverse.pop_back();
reverse.push_back(argv[3]);
reverse.push_back(argv[2]);
reverse.push_back(argv[1]);
  
  for (auto a : reverse) {
    cout << a << endl;
  }
  return 0;
}
