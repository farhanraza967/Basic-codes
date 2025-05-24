#include <iostream>
#include <ctime>
using namespace std;
void delayTwoSeconds(){
    clock_t start = clock();
    clock_t delay = 2 * CLOCKS_PER_SEC;
    while (clock() - start < delay) {

    }
}
int main(){
    cout << "Wait for 2 seconds..." << std::endl;
    delayTwoSeconds();
    cout << "Done!" << std::endl;
    return 0;
}
