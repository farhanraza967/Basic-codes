#include <iostream>
using namespace std;
int main() {
    int limit ;
    cout<<"Enter the limit: ";
cin>> limit;
    for (int side1 = 1; side1 <= limit; ++side1) {
        for (int side2 = side1; side2 <= limit; ++side2) {
            for (int hypotenuse = side2; hypotenuse <= limit; ++hypotenuse) {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    cout << "Pythagorean Triple: "
                         << side1 << ", " << side2 << ", " << hypotenuse << endl;
                }
            }
        }
    }

    return 0;
}
