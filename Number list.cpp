#include <iostream>
using namespace std;
int main(){
    const int sz = 20;
    int numbers[sz];
    int count = 0;

    while (count < sz) {
        int num;
        cout << "Enter number " << count + 1 << " (between 10 and 100): ";
        cin >> num;
      
        if (num < 10 || num > 100) {
            cout << "Invalid input. Please enter a number between 10 and 100.\n";
            continue;
        }

        bool Duplicate = false;
        for (int i = 0; i < count; ++i) {
            if (numbers[i] == num) {
                Duplicate = true;
                break;
            }
        }

        numbers[count] = num;
        ++count;

        if (!Duplicate) {
            cout << "Unique number entered: " << num << endl;
        }
    }

    return 0;
}
