#include <iostream>
using namespace std;

int main() {
    char ch;
    bool inWord = false;
    int wordCount = 0;

    cout << "Enter text (press Enter then Ctrl+Z to end input on Windows, or Ctrl+D on Linux/Mac):" << endl;

    while (cin.get(ch)) {
        if (ch != ' ' && ch != '\n' && ch != '\t') {
            if (!inWord) {
                inWord = true;
                wordCount++;
            }
        } else {
            inWord = false;
        }
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}
