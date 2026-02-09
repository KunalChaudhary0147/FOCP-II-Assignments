/*A String-matching tool validates if IDs are palindromes. Implement
a solution to check whether a given ID is a palindrome.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string id;
    cout << "Enter the ID: ";
    cin >> id;

    int len = id.length();
    bool is_palindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (id[i] != id[len - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) {
        cout << "The ID " << id << " is a palindrome." << endl;
    } else {
        cout << "The ID " << id << " is not a palindrome." << endl;
    }

    return 0;
}