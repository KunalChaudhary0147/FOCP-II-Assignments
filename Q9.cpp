/*A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
solution to classify the symbol.*/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // It's an alphabet
        char lowerCh = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch; // Convert to lowercase for uniformity
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            cout << ch << " is a Vowel." << endl;
        } else {
            cout << ch << " is a Consonant." << endl;
        }
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Number." << endl;
    } else {
        cout << ch << " is neither a vowel, consonant, nor a number." << endl;
    }

    return 0;
}